#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int f;
	cin>>f;
	
	int n,m;
	int i,j;
	int x,y;
	int width = 0, height = 0;
	
	for(i=0;i<f;++i){
		width = 0;
		height = 0;
		cin>>n>>m;
		for(j=0;j<n;++j){
			cin>>x>>y;
			width += x;
			height += y;
			
			if(j==0){
				width -= x;
				height -= y;
			}
		}	
		cout<<((width + m) * 2) + ((height + m) * 2)<< "\n";
	}
	
	return 0;
}