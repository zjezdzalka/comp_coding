#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin>>n;
	
	vector<int> val(n+1, 0);
	vector<int> am1(n+1, 0);

	int i;
	bool a;
	int counter_0 = 0;
	int counter_1 = 0;
	int cont = 0;
	int minms;

	for(i=0;i<n;++i){
		cin>>val[i];
		if(!val[i]){
			counter_0 += 1;
		}
		else counter_1 += 1;
	}

	minms = min(counter_0, counter_1);

	for(i=n;i>=0;--i){
		if(i==n) am1[i] = 0;
		else{
			if(val[i]){
				cont += 1;
			}
			am1[i] = cont;
		}
	}

	cont = 0;

	for(i=0;i<n;++i){
		minms = min(minms, am1[i+1] + cont);
		if(!val[i]){
			cont += 1;
		}
	}

	cout<<minms;
	
	return 0;
}