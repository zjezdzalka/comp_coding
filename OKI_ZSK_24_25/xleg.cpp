#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

long long power(long long a, long long b){
    long long res = 1;

    while(b > 0){
        if(b % 2 == 1){
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b /= 2;
    }

    return res;
}

void solve(){
    int r,k,b,m;
    cin>>r>>k>>b>>m; 

    long long sum = (power(r,k) * power(b,m)) % mod;
    cout<<sum<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int ttt;
    cin>>ttt;

    while(ttt--){
        solve();  
    }

    return 0;
}