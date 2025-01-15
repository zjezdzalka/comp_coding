#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	vector<int> num;
	int n;
	
	while(cin>>n){
		if(n == 0) break;
		num.push_back(n);
	}
	
	int maks_sum;
	int sum = 0;
	int i;
	
	for(i = 0; i<num.size(); ++i){
		sum += num[i];
		if(i == 0) maks_sum = sum; 
		else if(sum > maks_sum) maks_sum = sum;
		
		if(sum<0) sum = 0;
	}
	
	cout<<maks_sum;
	
	return 0;
}