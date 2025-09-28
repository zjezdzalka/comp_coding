#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(),v.end()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"
#define MOD 1e9 + 7
#define PI 3.1415926535897932384626433832795
#define mapii map<int,int>
#define mapci map<char,int>
#define str string

#define ttt1 int ttt=1;
#define ttt2 int ttt; cin>>ttt;

void solve(){
    int n,m;
    string s;
    cin>>n>>m;
    cin>>s;
    vi black(m);
    int i,j;
    int black_i = 0;
    int cur = 1;
    set<int> new_black;
    for(i=0;i<m;i++){
        cin>>black[i];
    }

    for(i=0;i<n;++i){
        if(s[i] == 'A'){
            cur += 1;
            new_black.insert(cur);
        }   
        else{
            cur += 1;
            while(new_black.find(cur) != new_black.end()){
                cur += 1;
            }
            new_black.insert(cur);
        }
    }

    for(i=0;i<m;++i){
        if(new_black.find(black[i]) == new_black.end()){
            new_black.insert(black[i]);
        }
    }

    for(int x : new_black){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ttt2;

    while(ttt--){
        solve();
    }

    return 0;
}