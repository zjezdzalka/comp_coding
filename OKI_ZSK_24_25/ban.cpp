#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin>>n;
	
	int i;
	map<int,int> value;
	vector<vector<int>> cykle;
	bool checked[n];
	int toVisit = n;
	
	for(i=0;i<n;++i){
		int num;
		cin>>num;
		value[i] = num-1;
		checked[i] = false;
	}
	
	int it = 0;
	i = 0;
	int checked_amount = 0;
	
	while(checked_amount != n){
		while(checked[it]){
			it += 1;
		}
		
		cykle.push_back({it});
		
		int cur = value[it];
		
		checked_amount++;
		checked[it] = true;
		
		while(cur != cykle[i][0]){
			checked[cur] = true;
			checked_amount++;
			
			cur = value[cur];
			
			cykle[i].push_back(cur);
		}
		
		i+=1;
	}
	
	cout<<i;
	
	return 0;
}