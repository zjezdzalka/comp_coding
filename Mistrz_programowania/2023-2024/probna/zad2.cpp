#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin>>n>>m;
	int i, j=0;
	char input;
	double total[n];
	stack<int> remaining;
	int left = n;
	double number;
	cout<<fixed<<setprecision(5);
	for(i=0;i<n;++i){
		total[i] = 0;
	}
	for(i=0;i<m;++i){
		cin>>input>>number;
		if(input == 'W'){
			remaining.push(number-1);
			left--;
		}
		else{
			total[j] += number/left;
			total[j] += total[j-1];
			j++;
		}
	}
	for(i=n-1;i>=1;--i){
		if(total[i-1] == 0){
			total[i-1] += total[i];
		}
	}
	for(i=0;i<n;++i){
		cout<<total[remaining.top()]<<" ";
		remaining.pop();
	}
}
