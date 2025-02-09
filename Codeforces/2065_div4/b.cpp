#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int ttt;
    cin>>ttt;

    while(ttt--){
        string x;
        cin>>x;
        int i;

        int max_pos = 0;
        for(i=0;i<=x.length()-2;++i){
            if(x[i] == x[i+1]){
                max_pos = i+1;
            }
        }

        if(max_pos>0){
            cout<<1;
        }
        else cout<<x.length();
        cout<<"\n";
    }

    return 0;
}