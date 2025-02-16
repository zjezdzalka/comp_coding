#include<bits/stdc++.h>
using namespace std;

unsigned int rev(unsigned int x){
    int reverse = 0;
    while (x>0)
    {
        reverse = reverse*10 + x%10;
        x/=10;
    }
    return reverse;
}

bool isPalindrome(unsigned int x){
    int reverse = rev(x);
    if(reverse == x) return 1;
    return 0;
}

unsigned int add(unsigned int x){
    int sum = 0;
    int reverse = rev(x);

    while(x > 0 || reverse > 0){
        int temp = x%10 + reverse%10;
        short over = temp/10;
        sum += over;
        sum *= 10;
        sum += temp%10;
        x/=10;
        reverse/=10;
    }

    return sum;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    while(n--){
        unsigned int x;
        int it = 0;
        cin>>x;
        while(!isPalindrome(x)){
            x = add(x);
            it += 1;
        }
        cout<<it<<" "<<x<<"\n";
    }

    return 0;
}