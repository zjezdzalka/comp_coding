#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    cin>>n>>m;

    vector<vector<int>> known (n+1);

    int i;
    int pos = -1;
    int first, second;

    for(i=0;i<m;++i){
        cin>>first>>second;
        
        known[first].push_back(second);
        known[second].push_back(first);
    }

    for(i=1;i<=n;++i){
        if(known[i].size() > known[pos].size()){
            pos = i;
        }
    }

    cout<<pos<<"\n";

    sort(known[pos].begin(), known[pos].end());

    for(i=0;i<known[pos].size();++i){
        cout<<known[pos][i]<<" ";
    }

    return 0;
}