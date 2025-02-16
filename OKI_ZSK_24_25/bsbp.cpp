#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    if(x <= 1) return 0;

    if(x == 2 || x == 3 || x == 5) return 1;
    else if(x%3==0 || x%2==0 || x%5==0) return 0;   

    for(int i=6;i*i<=x;i+=6){
        if(x%(i-1) == 0 || x%(i+1) == 0){
            return 0;
        }
    }
    return 1;
}

int sum(int x){
    int sum = 0;
    while(x > 0){
        sum += x%10;
        x/=10;
    }
    return sum;
}

int binSum(int x){
    int sum = 0;
    while(x > 0){
        sum += x%2;
        x/=2;
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int bot,top;
    cin>>bot>>top;

    int i;

    int counter = 0;

    for(i=bot;i<=top;++i){
        if(isPrime(i) && isPrime(sum(i)) && isPrime(binSum(i))) counter += 1;
    }

    cout<<counter<<"\n";

    return 0;
}