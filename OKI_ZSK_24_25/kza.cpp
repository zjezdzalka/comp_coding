#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int i;
    cin>>n;
    int val[n];

    vector<int> pos(n+2,0);
    vector<int> min(n+2,0);

    int mins = INT_MAX, max = -1;

    for(i=1;i<=n;++i){
        cin>>val[i];
        int kolor = val[i];

        if(i-pos[kolor]<mins && pos[kolor] != 0) mins = i-pos[kolor];
        else if(pos[kolor] == 0) { pos[kolor] = i; min[kolor] = i; }

        if(i-min[kolor]>max) max = i-min[kolor];
        pos[kolor] = i;
    }

    if(mins == INT_MAX && max == -1) cout<<"0 0";
    else if(mins == INT_MAX) cout<<"0 "<<max<<"\n";
    else if(max == -1) cout<<mins<<" 0\n";
    else cout<<mins<<" "<<max<<"\n";

    return 0;
}