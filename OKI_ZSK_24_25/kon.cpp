#include<bits/stdc++.h>
using namespace std;

char board[1002][1002];

bool path(int x, int y, int n){
    if(board[x][y] == 'w'){
        return true;
    }

    board[x][y] = 'x';

    if((board[x+2][y+1] == '.' || board[x+2][y+1] == 'w') && x+2<=n && y+1<=n) if(path(x+2, y+1, n)) return 1;
    if((board[x+2][y-1] == '.' || board[x+2][y-1] == 'w') && x+2<=n && y-1>=1) if(path(x+2, y-1, n)) return 1;
    if((board[x-2][y+1] == '.' || board[x-2][y+1] == 'w') && x-2>=1 && y+1<=n) if(path(x-2, y+1, n)) return 1;
    if((board[x-2][y-1] == '.' || board[x-2][y-1] == 'w') && x-2>=1 && y-1>=1) if(path(x-2, y-1, n)) return 1;
    if((board[x+1][y+2] == '.' || board[x+1][y+2] == 'w') && x+1<=n && y+2<=n) if(path(x+1, y+2, n)) return 1;
    if((board[x-1][y+2] == '.' || board[x-1][y+2] == 'w') && x-1>=1 && y+2<=n) if(path(x-1, y+2, n)) return 1;
    if((board[x+1][y-2] == '.' || board[x+1][y-2] == 'w') && x+1<=n && y-2>=1) if(path(x+1, y-2, n)) return 1;
    if((board[x-1][y-2] == '.' || board[x-1][y-2] == 'w') && x-1>=1 && y-2>=1) if(path(x-1, y-2, n)) return 1;
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    int i,j;

    int x,y;

    for(i=1;i<=n;++i){
        for(j=1;j<=n;++j){
            cin>>board[i][j];

            if(board[i][j] == 'k') { x = i; y = j; }
        }
    }

    if(!path(x,y,n)) cout<<"NIE\n";
    else cout<<"TAK\n";

    return 0;
}