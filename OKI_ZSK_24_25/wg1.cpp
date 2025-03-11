#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int ile_v;
    int ile_e;

    int p,q;

    int i;

    cin>>ile_v>>ile_e;

    vector<vector<int>> graf (ile_v+2, vector<int> ());

    for(i=0;i<ile_e;++i){
        cin>>p>>q;
        graf[p].push_back(q);
        graf[q].push_back(p);
    }

    for(i=1;i<=ile_v;++i){
        cout<<i<<": ";
        sort(graf[i].begin(),graf[i].end());
        for(int x:graf[i]){
            cout<<x<<" ";
        }
        cout<<"\n";
    }


    return 0;
}