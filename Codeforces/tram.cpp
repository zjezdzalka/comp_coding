#include<bits/stdc++.h>
using namespace std;
int letters[26];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,sum=0;
	int i;
	string a;
	cin>>n;
	for(i=0;i<n;++i){
		cin>>a;
		if(a[1] == '-'){
			sum--;
		}
		else if(a[1] == '+'){
			sum++;
		}
	}
	cout<<sum<<"\n";
	return 0;
}