#include<bits/stdc++.h>
using namespace std;

bool isPalindrom(string x){
	int i;
	for(i = 0; i<x.length()/2; ++i){
		if(x[i] != x[x.length()-i-1]) return false;
	}
	
	if(x.length() == 0) return false;
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	bool isNum = false;
	bool isWord = false;
	bool isSentence = false;
	bool isPali = false;
	
	// space, num, word, sentence, palindrom
	vector<int> vals = {0,0,0,0,0};
	
	int i;
	
	int x;
	cin>>x;
	int temp;
	
	queue<int> nums;
	
	for(i=0;i<x;++i){
		cin>>temp;
		nums.push(temp);
	}
	
	string n;
	cin.ignore();
	getline(cin, n);
	
	string word = "";
	
	for(i=0;i<n.length();++i){
		if(n[i] == ' '){
			vals[0] += 1;
			
			if(isNum) vals[1] += 1;
			isNum = false;
			
			if(isWord) vals[2] += 1;
			isWord = false;
			isPali = false;
			
			if(isPalindrom(word)) vals[4] += 1;
			word = "";
		}
		else if(n[i] >= '0' && n[i] <= '9'){
			isNum = true;
			
			if(isWord) vals[2] += 1;
			isWord = false;
			isPali = false;
			
			if(isPalindrom(word)) vals[4] += 1;
			word = "";
		}
		else if(n[i] >= 'a' && n[i] <= 'z' || n[i] >= 'A' && n[i] <= 'Z'){
			if(n[i] >= 'A' && n[i] <= 'Z'){
				n[i] += 32;
			}
			
			isWord = true;
			
			word += string(1, n[i]);
			
			if(isNum) vals[1] += 1;
			isNum = false;
			
			isSentence = true;
		}
		else if(n[i] == '.'){
			if(isNum) vals[1] += 1;
			isNum = false;
			
			if(isWord) vals[2] += 1;
			isWord = false;
			isPali = false;
			
			if(isSentence) vals[3] += 1;
			isSentence = false;
			
			if(isPalindrom(word)) vals[4] += 1;
			word = "";
		}
		else{
			if(isNum) vals[1] += 1;
			isNum = false;
			
			if(isWord) vals[2] += 1;
			isWord = false;
			isPali = false;

			if(isPalindrom(word)) vals[4] += 1;
			word = "";
		}
	}
	
	if(isNum) vals[1] += 1;
	if(isWord) vals[2] += 1;
	if(isPalindrom(word)) vals[4] += 1;
	
	while(!nums.empty()){
		cout<<vals[nums.front()-1]<<" ";
		nums.pop();
	}
	
	return 0;
}