#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	stack<int> kolejka;
	map<int, int> amount;
	
	int n;
	cin>>n;
	int i, num;
	
	for(i=0;i<n;++i){
		cin>>num;
		if(amount[num]){
			amount[num] += 1;
		}
		else{
			kolejka.push(num);
			amount[num] = 1;
		}
	}
	
	bool isPossible = true;
	bool kolejkaOdd = n%2==0?false:true;
	int amountOdd = 0;
	
	while(!kolejka.empty()){
		if(amount[kolejka.top()] % 2 != 0 ){
			isPossible = false;
			amountOdd += 1;	
		}
		kolejka.pop();
	}
	
	if(kolejkaOdd && amountOdd == 1) isPossible = true;
	
	if(isPossible) cout<<"TAK\n";
	else cout<<"NIE\n";
	
	return 0;
}