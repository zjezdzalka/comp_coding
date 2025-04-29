#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long a,b;
	cin>>a>>b;
	int i;
	long long parzyste=0, nparzyste=0;
	
	if(a%2==1){
		if(b%2==1){
			long long temp = b - a + 1;
			parzyste = temp / 2;
			nparzyste = temp / 2 + 1;
		}
		else{
			long long temp = b - a + 1;
			parzyste = temp / 2;
			nparzyste = temp / 2;
		}
	}
	else{
		if(b%2==1){
			long long temp = b - a + 1;
			parzyste = temp / 2;
			nparzyste = temp / 2;
		}
		else{
			long long temp = b - a + 1;
			parzyste = temp / 2;
			nparzyste = temp / 2 + 1;
		}
	}
	
	cout<<(nparzyste/2)*2+(parzyste/2)*2<<"\n";
	
	return 0;	
}