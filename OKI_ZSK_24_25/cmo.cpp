#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string x;
	cin>>x;
	
	int i,j;
	map<char,int> letters;
	
	int maks = -1;
	char top = 'a';
	
	for(i=0;i<x.length();++i){
		if(letters[x[i]]){
			letters[x[i]] += 1;
			if(letters[x[i]] > maks){
				top = max(x[i], top);
				maks = letters[x[i]];	
			}
		}      
		else{
			letters[x[i]] = 1;
			if(letters[x[i]] > maks){
				top = max(x[i], top);
				maks = letters[x[i]];	
			}
		}
	}
	
	for(i=0;i<26;++i){
		if(i + 'a' == top) continue;
		else{
			for(j=0;j<letters[i + 'a'];++j){
				cout<<(char)(i+'a');
			}
		}
	}
	
	return 0;
}