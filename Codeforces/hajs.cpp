#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	
	cout<<t/3600<<"g"<<(t%3600)/60<<"m"<<(t%60)<<"s";
	return 0;
}