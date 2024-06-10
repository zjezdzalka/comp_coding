#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	int a=0,b=1;
	cin>>n;
	for(int i=0;i<n;++i){
		cout<<a<<" ";
		b += a;
		a = b-a;
	}
	return 0;
}