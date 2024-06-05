#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin>>n>>m;
	int i,j;
	char border, inside, input;
	for(i=0;i<n;++i){
		for(j=0;j<n;++j){
			cin>>input;
			if(i==0 && j==0){
				border = input;
			}
			else if(i==1 && j==1){
				inside = input;
			}
		}
	}
	for(i=0;i<m;++i){
		for(j=0;j<m;++j){
			if(i==0 || i==m-1){
				cout<<border;
			}
			else{
				if(j%m==0 || j%m==m-1){
					cout<<border;
				}
				else{
					cout<<inside;
				}
			}
		}
		cout<<"\n";
	}
}