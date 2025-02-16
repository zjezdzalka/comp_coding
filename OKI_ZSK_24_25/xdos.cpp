#include<bits/stdc++.h>
using namespace std;

void solve(int x){
    int sum = 1;
    for(int i=2;i*i<=x;++i){
        if(x%i == 0){
            sum += i;
            if(i != x/i){
                sum += x/i;
            }
        }
    }

    if(sum == x){
        cout<<"OK\n";
    }
    else if(sum < x){
        cout<<"NIEDOSTATECZNA   \n";
    }
    else{
        cout<<"WIELKA\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    while(n--){
        int x;
        cin>>x;
        solve(x);
    }

    return 0;
}