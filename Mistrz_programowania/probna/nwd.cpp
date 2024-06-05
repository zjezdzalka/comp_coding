#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	n = 7873;
	int i = 2;
	vector<int> dzielniki;
	while(n!=1){
		if(n%i==0){
			dzielniki.push_back(i);
			n/=i;
		}
		else{
			i++;
		}
	}
	cout<<endl<<"dzielniki: ";
	for(int j=0;j<dzielniki.size();j++){
		cout<<dzielniki[j]<<" ";
	}
	return 0;
}