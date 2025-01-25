#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int ttt;
	cin>>ttt;
	
	int i;
	int n, m1, m2;
	int x,y;
	
	while(ttt--){
		cin>>n>>m1>>m2;
		
		int counter = 0;
		
		map<pair<int,int>, int> amount;
		
		stack<pair<int,int>> allEdges;
		
		for(i=0;i<m1;++i){
			cin>>x>>y;
			
			pair<int,int> curPair = make_pair(x,y);
			if(curPair.first > curPair.second) swap(curPair.first, curPair.second);
			allEdges.push(curPair);
			
			amount[curPair] = 1;
		}
		
		for(i=0;i<m2;++i){
			cin>>x>>y;
			
			pair<int,int> curPair = make_pair(x,y);
			if(curPair.first > curPair.second) swap(curPair.first, curPair.second);
			allEdges.push(curPair);
			
			if(amount[curPair]) amount[curPair] += 1;
			else amount[curPair] = 1;
		}
		
		while(!allEdges.empty()){
			pair<int,int> current = allEdges.top();
			
			if(amount[current] == 1) counter += 1;
			
			allEdges.pop();
		}
		
		cout<<counter<<"\n";
	}
	
	return 0;
}