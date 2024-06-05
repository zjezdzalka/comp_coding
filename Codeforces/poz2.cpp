#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,k;
	int i,j;
	cin>>n>>k;
	int a[n],b[n],c[n];
	for(i=0;i<n;++i){
		cin>>a[i];
	}
	for(i=0;i<n;++i){
		cin>>b[i];
	}
	for(i=0;i<n;++i){
		cin>>c[i];
	}
	for(i=0;i<n;++i){
		for(j=0;j<n;++j){
			if(k / (a[i]*b[j]) == c){
				cout<<a[i]
			}
		}
	}
	return 0;
}