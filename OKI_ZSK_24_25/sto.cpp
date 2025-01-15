#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,m,x;
	cin>>n>>m>>x;
	
	int ilosc = 0;
	
	if(n<x || m<x){
		cout<<ilosc;
	}
	else{		
		if(n<2*x){
			ilosc += (m/x);
		}
		else{
			if(m<2*x){
				ilosc += (n/x);
			}
			else{
				n -= x*2;
				ilosc += (n/x)*2;
				ilosc += (m/x)*2;
			}
		}
		cout<<ilosc;
	}
	
	return 0;
}