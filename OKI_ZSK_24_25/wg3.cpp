#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    cin>>n>>m;

    vector<vector<int>> a(n,vector<int>());

    int i;
    for(i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    queue<int> visit;
    vector<int> visited(n,0);

    visit.push(1);
    visited[1]=1;

    while(!visit.empty()){
        int x=visit.front();
        visit.pop();
        for(i=0;i<a[x].size();i++){
            if(visited[a[x][i]]==0){
                visit.push(a[x][i]);
                visited[a[x][i]]=1;
            }
        }
    }


    return 0;
}