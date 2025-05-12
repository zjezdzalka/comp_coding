#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    cin>>n>>m;

    int i;

    int a,b;

    vector<vector<int>(n+1, 0)> tab(n+1,0);

    for(i=0;i<m;++i){
        cin>>a>>b;
        tab[a][b] = 1;
        tab[b][a] = 1;
    }

    for(i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            if()
        }
    }

    return 0;
}