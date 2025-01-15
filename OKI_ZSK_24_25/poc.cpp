#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin>>n;
	int i;
	long long masa[n+1];
	masa[0] = 0;
	for(i=1;i<=n;++i){
		cin>>masa[i];
		masa[i] += masa[i-1];
	}
	
	int k;
	cin>>k;
	int x,y;
	
	for(i=0;i<k;++i){
		cin>>x>>y;
		cout<<masa[y] - masa[x-1]<<"\n";
	}
	
	return 0;
}