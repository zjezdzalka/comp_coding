#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long n;
	cin>>n;
	
	bool hasLetter = false;
	
	while(n>0){
		if(n%16 >= 10){
			hasLetter = true;
		}
		n/=16;
	}
	
	if(hasLetter) cout<<"TAK";
	else cout<<"NIE";
	
	return 0;
}