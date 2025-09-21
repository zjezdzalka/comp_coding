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
    int n;
    cin>>n;
    
    int i;
    if(n%2==0){
        int temp = n;
        int temp_npar = n-1;
        while(temp > 0){
            cout<<temp<<" ";
            temp -= 2;
        }
        cout<<temp_npar<<" ";
        temp +=2;
        while(temp<=n){
            cout<<temp<<" ";
            temp +=2;
        }
        temp_npar -= 2;
        if(temp_npar > 0){
            while(temp_npar > 1){
                cout<<temp_npar<<" ";
                temp_npar -= 2;
            }
            cout<<n-1<<" ";
            while(temp_npar<n-1){
                cout<<temp_npar<<" ";
                temp_npar += 2;
            }
        }
        cout<<1<<"\n";
    }
    else{
        int temp = n-1;
        int temp_par = n;
        while(temp_par > 0){
            cout<<temp_par<<" ";
            temp_par -= 2;
        }
        if(n>1) cout<<temp<<" ";
        temp_par += 4;
        while(temp_par<=n){
            cout<<temp_par<<" ";
            temp_par +=2;
        }
        temp -= 2;
        while(temp > 0){
            cout<<temp<<" ";
            temp -= 2;
        }
        if(n>1)cout<<n-1<<" ";
        temp += 2;
        while(temp < n-1){
            cout<<temp<<" ";
            temp += 2;
        }
        cout<<1<<"\n";
    }
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