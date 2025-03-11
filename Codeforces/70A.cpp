#include<bits/stdc++.h>
using namespace std;

const int mod = 1e6+3;

long long power(long long a, int b){
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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int ttt;
    cin>>ttt;

    if(ttt) cout<<power(3, ttt-1);
    else cout<<1;
    

    return 0;
}