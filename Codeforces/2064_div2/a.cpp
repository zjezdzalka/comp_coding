#include<bits/stdc++.h>
using namespace std;

void solve(){
    int i;

    int length;
    cin>>length;

    string n;
    cin>>n;

    int counter = 0;
    bool cur = false;

    for(i=0;i<length;i++){
        if(n[i] == '1'){
            if(!cur){
                counter++;
                cur = true;
            }
        }
        else{
            if(cur){
                counter++;
                cur = false;
            }
        }
    }

    cout<<counter<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    while(n--){
        solve();
    }

    return 0;
}