#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s,t;
	cin>>s;
	cin>>t;
	int i;
	if(s.length() != t.length()){
		cout<<"NO";
	}
	else{
		for(i=0;i<s.length();++i){
			if(s[i] != t[t.length()-1-i]){
				cout<<"NO";
				return 0;
			}
		}
		cout<<"YES";
	}
	return 0;
}