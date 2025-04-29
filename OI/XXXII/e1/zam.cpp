#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string n;
	cin>>n;
	int i;
	long long moves = 0;
	
	int rightAmount = 0;
	
	int amountOfNines = 0;
	bool isNine = false;
	
	int amountToMove = 0;
	
	for(i=0;i<n.length();++i){
		if(n[i]=='0'){
			isNine = false;
			rightAmount = 0;
			continue;
		}
		else{
			moves += '9' - n[i];
			rightAmount ++;
			amountToMove++;
			
			if(n[i] == '9'){
				isNine = true;
				amountOfNines ++;
			}
			else{
				isNine = false;
				amountOfNines = 0;
			}
		}
	}
	
	if(amountToMove == 1 && n[0] == '1') cout<<1<<"\n";
	else{
		if(isNine) moves += (amountToMove - amountOfNines);
		else moves += (amountToMove - rightAmount);
		moves += 2;
		cout<<moves<<"\n";
	}
	return 0;
}