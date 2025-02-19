#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int ttt;
    cin>>ttt;

    while(ttt--){
        int i,j;
        int n,m;
        cin>>n>>m;

        set<int> colors;

        vector<vector<int>> arr(n, vector<int>(m, 0));

        int ans = 0;

        vector<int> vals;
        
        map<int,int> counter;

        for(i=0;i<n;++i){
            for(j=0;j<m;++j){
                cin>>arr[i][j];

                if(
                    (j>0 && arr[i][j] == arr[i][j-1]) ||
                    (j<m-1 && arr[i][j] == arr[i][j+1]) ||
                    (i>0 && arr[i][j] == arr[i-1][j]) ||
                    (i<n-1 && arr[i][j] == arr[i+1][j])
                ) counter[arr[i][j]] = 2;

                colors.insert(arr[i][j]);
            }
        }

        for(int x : colors){
            if(!counter[x]) counter[x] = 1;
            vals.push_back(counter[x]);
        }

        sort(vals.begin(), vals.end());

        for(i = 0; i<vals.size()-1;++i){
            ans += vals[i];
            
        }

        cout<<ans<<"\n";
    }

    return 0;
}