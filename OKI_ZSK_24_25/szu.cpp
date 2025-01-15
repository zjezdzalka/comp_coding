#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin>>n;
	
	int szu[n+2];
	int i;
	
	for(i=1;i<=n;++i){
		cin>>szu[i];
	}
	
	int sum = 0;
	bool possible = true;
	for(i=n;i>=1;--i){
		if(szu[i] < i){
			possible = false;
		}
		else if(szu[i] > i && szu[i] >= szu[i+1] && i!=n){
			sum++;
			szu[i] = szu[i+1] - 1;	
		}
	}
	
	if(possible) cout<<sum;
	else cout<<-1;
	
	return 0;
}