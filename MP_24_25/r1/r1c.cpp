#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin>>n;
	
	bool isPossible = true;
	string str, rev;
	cin>>str;
	
	int i;
	
	for(i = 0; i<n; ++i){
		int num = str[i] - '0';
		
		if(num == 3 || num == 4 || num == 7){
			isPossible = false;
			break;	
		}
		else{
			if(num == 6) rev = (char)(9 + '0') + rev;
			else if(num == 9) rev = (char)(6 + '0') + rev;
			else rev = (char)(num + '0') + rev;
		}
	}
	
	if(!isPossible) cout<<"NIE\n";
	else if(str == rev) cout<<"TAK\n";
	else cout<<"NIE\n";
	
	return 0;
}