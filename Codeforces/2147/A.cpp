#include<bits/stdc++.h>
using namespace std;

#define long long ll
#define vi vector<int>
#define vll vector<ll>
#define for0(i,n) for(i=0;i<n;++i)
#define for1(i,n) for(i=1;i<=n;++i)
#define all(v) v.begin(),v.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define endl "\n"
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define mapii map<int,int>
#define mapci map<char,int>
#define str string


void solve(){
    int x,y;
    cin>>x>>y;

    if(x==y) cout<<"-1\n";
    else if(x-y == 1 || y == 1) cout<<"-1\n";
    else if(x>y) cout<<3<<"\n";
    else cout<<2<<"\n";
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