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
    int x;
    cin>>x;
    int i;
    int arr[2*x];
    int maxt = 0;
    for(i=0;i<2*x;++i){
        cin>>arr[i];
    }

    int j;
    int arrp[x];
    int am = 0;

    for(i=1;i<=x;++i){
        maxt = 0;
        am = 0;
        for(j=0;j<2*x;++j){
            if(am < x && j < (2*x)-i){
                am += 1;
                arrp[am] = arr[j];
            }
            else{
                am -= 1;
                maxt = (arr[j] - arrp[am]);
                arrp[am] = 0;
            }
        }
        cout<<maxt<<" ";
    }
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