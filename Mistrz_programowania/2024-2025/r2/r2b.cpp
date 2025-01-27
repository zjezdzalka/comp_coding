#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long n;
	cin>>n;
	
	long long pot = 1;
	
	while(pot * 2 < n){
		pot *= 2;
	}
	
	if(pot < n) pot *= 2;
	
	
	cout<<pot-n<<"\n";
	
	return 0;
}