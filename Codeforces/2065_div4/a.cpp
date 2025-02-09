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
        x[x.length()-2] = 'i';
        for(int i=0;i<x.length()-1;++i){
            cout<<x[i];
        }
        cout<<"\n";
    }

    return 0;
}