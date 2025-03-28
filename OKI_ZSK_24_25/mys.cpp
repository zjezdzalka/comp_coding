#include<bits/stdc++.h>
using namespace std;

char a[1002][1002];
bool visited[1002][1002];

bool solve(int x, int y, int n, int m){
    visited[x][y] = 1;

    if(a[x][y] == 'w'){
        return true;
    }

    if((a[x+1][y] == '-' || a[x+1][y] == 'w') && x+1<=m && visited[x+1][y] == 0){
        if(solve(x+1, y, n, m)) return 1;
    }
    if((a[x-1][y] == '-' || a[x-1][y] == 'w') && x-1>=1 && visited[x-1][y] == 0){
        if(solve(x-1, y, n, m)) return 1;
    }
    if((a[x][y+1] == '-' || a[x][y+1] == 'w') && y+1<=n && visited[x][y+1] == 0){
        if(solve(x, y+1, n, m)) return 1;
    }
    if((a[x][y-1] == '-' || a[x][y-1] == 'w') && y-1>=1 && visited[x][y-1] == 0){
        if(solve(x, y-1, n, m)) return 1;
    }

    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    cin>>n>>m;

    int i,j;

    int x,y;

    for(i=1;i<=m;++i){
        for(j=1;j<=n;++j){
            cin>>a[i][j];
            if(a[i][j] == 'o'){
                x = i;
                y = j;
            }
        }
    }

    if(solve(x,y,n,m) == 0) cout<<"NIE\n";
    else cout<<"TAK\n";

    return 0;
}