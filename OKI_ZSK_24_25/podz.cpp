#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long x,y;
	cin>>x>>y;
	
	long long sum = y/3 - (x-1)/3 + y/5 - (x-1)/5 - y/15 + (x-1)/15;
	cout<<sum;
	
	return 0;
}