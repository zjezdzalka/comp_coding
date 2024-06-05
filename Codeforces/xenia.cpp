#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,m;
	int i,j;
	cin>>n>>m;
	int bigger,sum=0;
	
	if(n>=m) bigger=n;
	else bigger=m;
	
	for(j=0;j<=bigger;++j){
		for(i=j;i<=bigger;++i){
			if(
			
			(i*i + j == m)
			&&
			(j*j + i == n)
			
			) sum++;
		}
	}
	
	for(j=0;j<=bigger;++j){
		for(i=j;i<=bigger;++i){
			if(
			
			(i*i + j == n)
			&&
			(j*j + i == m)
			
			) sum++;
			
			if(i+j == n && i+j == m){
				sum--;
			}
		}
	}
	
	cout<<sum<<"\n";
	return 0;
}