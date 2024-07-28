#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	int i,j;
	cin>>n;
	int stars[n];
	for(i=0;i<n;++i){
		cin>>stars[i];
	}
	cin>>m;
	int gears[m];
	for(i=0;i<m;++i){
		cin>>gears[i];
	}
	double actual_result;
	int result;
	int top_ratio = -1;
	int amount = 0;
	for(i=0;i<n;++i){
		for(j=0;j<m;++j){
			result = gears[j] / stars[i];
			actual_result = (double)gears[j] / (double)stars[i];
			if(result!=actual_result) continue;
			else{
				if(result > top_ratio){
					top_ratio = result;
					amount = 1;
				}
				else if(result == top_ratio) amount ++;
			}
		}
	}
	cout<<amount<<"\n";
	return 0;
}