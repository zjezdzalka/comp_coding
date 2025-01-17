#include<bits/stdc++.h>
using namespace std;

int val[1000000];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin>>n;
	bool a,b;
	
	int i;
	int pos = 0;
	int counter = 0;
	bool right;
	
	cin>>a;
	right = a;
	
	if(!right){
		for(i=1; i<n;++i){
			cin>>b;
			if(b) {
				counter += 1;
			}
		}
		
		cout<<counter;
	}
	else{
		int counter_right = 0;
		for(i=1; i<n;++i){
			cin>>b;
			if(b) {
				counter += 1;
			}
			else{
				counter_right += 1;
			}
		}
		
		cout<<min(counter,counter_right)<<"\n";
	}
	
	return 0;
}