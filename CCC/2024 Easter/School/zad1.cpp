#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,c;
	cin>>n>>c;
	int money[n][c];
	int i,j;
	int results[n];
	for(i=0;i<n;++i){
		results[i] = 0;
	}
	for(i=0;i<n;++i){
		cin>>money[i][0];
		int diff = -1;
		for(j=1;j<c;++j){
			cin>>money[i][j];
			diff = money[i][j] - money[i][j-1];
			if(diff>1 && results[i] == 0){
				results[i] = money[i][j-1] + 1;
			}
		}
	}
	for(i=0;i<n;++i){
		if(results[i] == 0) results[i] = money[i][c-1] + 1;
		cout<<results[i]<<"\n";
	}
	return 0;
}