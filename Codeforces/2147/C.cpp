#include<bits/stdc++.h>
using namespace std;

#define ll long long
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
    int n;
    cin>>n;
    string pos;
    cin>>pos;

    bool isPossible = true;

    int i;
    if(n>2){
        for(i=0;i<n-2;++i){
            if(pos[i] == '1' && pos[i+1] == '0' && pos[i+2] == '1'){
                bool leftZero = (i - 1 >= 0 && pos[i-1] == '0');
                bool rightZero = (i + 3 < n && pos[i+3] == '0');
                if (!leftZero && !rightZero) { 
                    isPossible = false; 
                    break; 
                };
            }
        }
    }

    if(isPossible) cout<<"YES\n";
    else cout<<"NO\n";
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