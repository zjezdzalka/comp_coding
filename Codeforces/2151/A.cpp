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

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> nums(m);
    int i;
    for(i=0;i<m;i++){
        cin>>nums[i];
    }

    bool check = true;
    for(i=0;i<m-1;++i){
        if(nums[i]>=nums[i+1]){
            check = false;
            break;
        }
    }

    if(check == true) cout<<n-nums[m-1]+1<<endl;
    else cout<<1<<endl;
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