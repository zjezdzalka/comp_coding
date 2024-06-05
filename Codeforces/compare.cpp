#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, sum=0;
	string a,b;
	cin>>n>>a>>b;
	for(int i=0;i<n;++i){
		if(a[i]!=b[i]) sum++;
	}
	cout<<sum<<"\n";
	return 0;
}