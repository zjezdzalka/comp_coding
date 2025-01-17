#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string x;
	cin>>x;
	
	int i;
	int sum = 0;
	
	for(i=0;i<x.length();++i){
		if(x[i] == 'X') continue;
		else sum += x[i] - '0';
	}
	
	cout<<9 - sum%9<<"\n";
	
	return 0;
}