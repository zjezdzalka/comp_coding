#include<bits/stdc++.h>
using namespace std;

bool check(long long n, long long w, long long h, int k){
    return ((n/h) * (n/w) >= k);
}

void solve(){
    int height, width, k;
    cin >> width >> height >> k;    

    long long l = 1;
    
    long long r = 2;

    while(!check(r, width, height, k)){
        r *= 2;
    }

    // cout<<check(9, width, height, k)<<endl;

    while(l<r){
        long long m = (l + r) / 2;
        if(check(m, width, height, k)){
            r = m;
        }
        else{
            l = m+1;
        }
    }

    cout<<r<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();    

    return 0;
}