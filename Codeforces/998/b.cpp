#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int ttt;
	cin>>ttt;
	
	int n,m;
	
	int i,j;
	
	while(ttt--){
		cin>>n>>m;
		
		vector<int> queue = {};
		
		int cards[n][m];
		
		for(i=0;i<n;++i){
			for(j=0;j<m;++j){
				cin>>cards[i][j];
			}
			
			sort(cards[i], cards[i]+m);
		}
		
		for(i=0;i<n;++i){
			for(j=0;j<n;++j){
				if(cards[j][0] == i) queue.push_back(j);
			}
		}
		
		int size = queue.size();
		bool isPossible = true;
		
		for(i=0;i<m;++i){
			for(j=0;j<size;++j){
				if(cards[queue[j]][i] % n != j){
					isPossible = false;
					break;
				}
			}
			if(!isPossible) break;
		}
		
		if(!isPossible) cout<<-1<<"\n";
		else{
			for(j=0;j<size;++j){
				cout<<queue[j]+1<<" ";
			}
			cout<<"\n";
		}
	}
	
	return 0;
}