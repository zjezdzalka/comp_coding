#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int ttt;
	cin>>ttt;
	
	int i;
	int n,k;
	
	while(ttt--){
		cin>>n>>k;
		
		int nums[n];
		map<int, int> amount;
		
		for(i=0;i<n;++i){
			cin>>nums[i];
			if(amount[nums[i]]) amount[nums[i]] += 1;
			else amount[nums[i]] = 1;
		}
		
		sort(nums, nums+n);
		
		int counter = 0;
		
		for(i=0;i<n;++i){
			int val = nums[i];
			int szu = k - val;
			
			if(amount[szu] > 0 && amount[val] > 0){
				int maks = min(amount[szu], amount[val]);
				
				if(szu == val) counter += maks/2;
				else counter += maks;
				
				amount[szu] -= maks;
				amount[nums[i]] -= maks;
			}
		}
		
		cout<<counter<<"\n";
	}
	
	return 0;
}