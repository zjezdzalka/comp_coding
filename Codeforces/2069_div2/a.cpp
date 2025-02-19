#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int ttt;
    cin>>ttt;

    while(ttt--){
        int i,j;
        int n;
        cin>>n;

        bool isPossible = true;

        vector<int> a(n);
        for(i=1;i<n-1;i++){
            cin>>a[i];
        }

        for(i=2;i<n-2;++i){
            if(a[i-1] == 1 && a[i] == 0 && a[i+1] == 1){
                cout<<"NO\n";
                isPossible = false;
                break;
            }
        }

        if(isPossible) cout<<"YES\n";
    }

    return 0;
}