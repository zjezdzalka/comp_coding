#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin>>n>>m;
	int i;
	int id, following;
	map<pair<int, int>, bool> pairs;
	int total[n];
	for(i=0;i<n;++i){
		total[i] = 0;
	}
	for(i=0;i<m;++i){
		cin>>id>>following;
		if(pairs[make_pair(following-1, id-1)] == 1){
			total[id-1] -= 1;
		}
		else{
			total[following-1] += 1;
			pairs[make_pair(id-1,following-1)] = 1;
		}
	}
	for(i=0;i<n;++i){
		cout<<total[i]<<" ";
	}
	return 0;
}