#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,q;
	cin>>n>>q;
	
	int t = 0;
	int i;
	
	int eff[n+1];
	
	int sum_eff = 0;
	for(i=1;i<=n;++i){
		cin>>eff[i];
		sum_eff += eff[i];
	}
	
	for(i=0;i<q;++i){
		char cmd;
		int val, day;
		int i;
		cin>>cmd>>I;
		switch(cmd){
			case 'V':
				cin>>val>>day;
				sum_eff -= eff[day];
				eff[day] = val;
				sum_eff += eff[day];
				break;
			case 'F':
				cin>>day;
				sum_eff -= eff[day];
				eff[day] = 0;
				break;
			case 'H':
				cin>>val>>day;
				break;
			case 'Q':
				cin>>val>>day;
				break;
		}
	}
	
	return 0;
}