#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string n;
	cin>>n;
	
	bool isNum = false;
	int spc_counter = 0;
	int num_counter = 0;
	int word_counter = 0;
	int sen_counter = 0;
	int pal_counter = 0;
	
	int i;
	
	int x;
	cin>>x;
	int temp;
	
	stack<int> nums;
	
	for(i=0;i<x;++i){
		cin>>temp;
		nums.push(temp);
	}
	
	for(i=0;i<n.length();++i){
		if(n[i] == '  '){
			spc_counter += 1;
			if(isNum) num_counter += 1;
			isNum = false;
		}
		else if(n[i] >= '0' && n[i] <= '9'){
			isNum = true;
		}
		else{
			if(isNum) num_counter += 1;
			isNum = false;
		}
	}
	
	cout<<spc_counter<<" "<<num_counter<<" "<<word_counter<<" "<<sen_counter<<" "<<pal_counter<<"\n";
	
	return 0;
}