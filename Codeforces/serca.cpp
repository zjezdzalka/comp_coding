#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int i,j,temp=n/2;
	for(i=1;i<=n;++i){
		if(i<n/2){
			cout<<"<";
			for(j=1;j<i;++j){
				cout<<"3";
			}
			cout<<"\n";
		}
		else if(i>n/2){
			cout<<"<";
			for(j=temp;j>0;--j){
				cout<<"3";
			}
			--temp;
			cout<<"\n";
			
		}
		else{
			cout<<"<";
			for(j=0;j<n/2;++j){
				cout<<"3";
			}
			cout<<"\n";
		}
	}
	return 0;
}