#include<bits/stdc++.h>
using namespace std;
int main(){	
	int n;
	cin>>n;
	int i;
	
	int sum = 0;
	int num;
	
	for(i=0;i<n;++i){
		cin>>num;
		sum += num;
		cout<<9 - sum%9<<"\n";
		sum += 9 - sum%9;
		
		fflush(stdout);
	}
	
	return 0;
}