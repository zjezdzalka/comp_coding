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
    int i,j;
    cin>>n;
    int val[n+1];
    for(i=1;i<=n;++i){
        cin>>val[i];
    }

    bool allZeros = false;
    bool whosTurn = 0;
    map<int,int> sum;
    set<int> amount;

    int a, b;

    a=0,b=0;

    int nums = 0, saved = 0;

    for(i=1;i<=n;++i){
        if(sum[val[i]]) sum[val[i]] += 1;
        else{
            sum[val[i]] = 1;
            amount.insert(val[i]);
        }
    }

    while(!allZeros){
        if (amount.size() == 1 && *amount.begin() == 0) break;

        nums = 0;
        saved = 0;

        for(int x : amount){
            if(x==0) continue;
            if(sum[x] > nums){
                nums = sum[x];
                saved = x;
            }
            else if(sum[x] == nums && saved < x) saved = x;
        }

        if(whosTurn) b += nums;
        else a += nums;

        whosTurn = !whosTurn;

        if(saved != 0){
            amount.erase(saved);
            if(amount.find(saved-1) != amount.end()) {
                amount.erase(saved-1);
            }
            amount.insert(saved-1);
        }

        if(sum[saved-1]){
            sum[saved-1] += sum[saved];
        }
        else sum[saved-1] = sum[saved];

        sum[saved] = 0;
        
    }

    cout<<a<<" "<<b<<"\n";
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