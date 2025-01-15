#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,m;
	cin>>n>>m;
	
	int i,j;
	map<int,bool> values;
	int sum = 0;
	int num;
	
	for(i=0;i<n;++i){
		values[i] = false;
	}
	
	for(i=0;i<m;++i){
		cin>>num;
		if(!values[num-1]) sum += 1;
		else sum -= 1;
		
		values[num-1] = !values[num-1];
	}
	
	cout<<sum;
	
	return 0;
}