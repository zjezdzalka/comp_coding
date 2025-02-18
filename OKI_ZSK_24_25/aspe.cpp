#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,x;
    int i;
    cin>>n;

    long long nww = 1;
    cin>>nww;
    nww += 1;

    for(i=1;i<n;++i){
        cin>>x;
        x+=1;
        nww = lcm(nww,x);
    }

    cout<<nww-1<<"\n";

    return 0;
}