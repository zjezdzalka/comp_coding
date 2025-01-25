#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int ttt;
	cin>>ttt;
	
	int i;
	int n;
	
	while(ttt--){
		cin>>n;
		int nums[n];
		
		bool isPossible = false;
		
		for(i=0;i<n;++i){
			cin>>nums[i];	
		}
		
		if(!isPossible){
			for(i=0;i<n-1;++i){
				int mins = min(nums[i], nums[i+1]);
				nums[i] -= mins;
				nums[i+1] -= mins;
			}
			
			for(i=1;i<n;++i){
				if(nums[i-1] > nums[i]){
					isPossible = false;
					break;
				}
				isPossible = true;
			}
		}
		
		if(isPossible) cout<<"YES\n";
		else cout<<"NO\n";
		
	}
	
	return 0;
}