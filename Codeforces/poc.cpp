#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,m,k,value;
	int i;
	cin>>n>>m>>k;
	m += 1;
	int values[k], trains[n], trains_bitek[m];
	m -= 1;
	for(i=0;i<k;++i){
		values[i] = 0;
	}
	for(i=0;i<n;++i){
		cin>>trains[i];
	}
	for(i=0;i<m;++i){
		cin>>trains_bitek[i];
		values[trains_bitek[i]]++;
	}
	for(i=0;i<=k;++i){
		cout<<values[i];
	}
	return 0;
}