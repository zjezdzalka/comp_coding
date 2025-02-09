#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int ttt;
    cin>>ttt;

    while(ttt--){
        int n,m;
        cin>>n>>m;
        
        int i,j;
        int a[n],b[m];

        bool isSorted = true;

        for(i=0;i<n;++i){
            cin>>a[i];
            if(i>0 && a[i-1]<a[i]){
                isSorted = false;
            }
        }

        for(i=0;i<m;++i){
            cin>>b[i];
        }

        if(isSorted){
            cout<<"YES\n";
            continue;
        }
        else{
            int temp_a[n];
            for(i=0;i<n;++i){
                if(temp_a[i-1] > temp_a[i]){
                    temp_a[i-1] = b[0] - temp_a[i-1];
                    if(temp_a[i-1] > temp_a[i]){
                        cout<<"NO\n";
                        break;
                    }
                }
                cout<<temp_a[i]<<" ";
            }
        }
        
        /*sort(a,a+n);
        sort(b,b+m);
        reverse(b,b+m);

        for(i=0;i<n;++i){

        }*/
    }

    return 0;
}