#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,H;
	int i;
	int sum_change=0,current_depth=0,sum_change2=0;
	bool previous = false;
	char letter;
	cin>>n>>H;
	for(i=0;i<n;++i){
		cin>>letter;
		if(letter == '('){
			current_depth++;
			if(current_depth>H && previous == false){
				sum_change++;
				current_depth--;
				previous = true;
			}
			else{
				sum_change2++;
				previous = false;
			}
		}
		else{
			current_depth--;
			if(current_depth<0){
				sum_change++;
				current_depth++;
				previous = true;
			}
			else{
				sum_change2++;
				previous = false;
			}
		}
	}
	cout<<sum_change<<"\n";
	return 0;
}