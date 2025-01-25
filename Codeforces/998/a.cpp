#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin>>n;
	
	int i;
	
	int a,b,c,d,e;
	
	int counter = 0;
	
	int maks = 0;
	
	for(i=0;i<n;++i){
		counter = 0;
		maks = 0;
		cin>>a>>b>>d>>e;
		
		c = a + b;
		counter = 1;
		
		if(b+c == d) counter += 1;
		if(c+d == e) counter += 1;
		maks = max(maks, counter);
		
		c = d-b;
		counter = 1;
		if(a+b == c) counter += 1;
		if(c+d == e) counter += 1;
		maks = max(maks, counter);
		
		c = e-d;
		counter = 1;
		if(a+b == c) counter += 1;
		if(b+c == d) counter += 1;
		maks = max(maks, counter);
		
		cout<<maks<<"\n";
	}
	
	return 0;
}