#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int ttt;
    cin>>ttt;

    map<string,int> m;

    while(ttt--){
        string n;
        cin>>n;

        if(m[n]){
            cout<<n<<m[n]<<"\n";
            m[n]++;
        }
        else{
            cout<<"OK\n";
            m[n]++;
        }
    }

    return 0;
}