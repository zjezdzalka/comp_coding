#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin>>n;
	int tablica[n+1];
	int i;
	
	for(i=1;i<=n;++i){
		cin>>tablica[i];
	}
	
	sort(tablica+1, tablica+n+1);
	
	int counter = 1;
	int maks = -1;
	
	for(i=n-1;i>=0;--i){
		if(tablica[i] == tablica[i+1]) continue;
		else if(tablica[i] == tablica[i+1] - 1){
			counter++;
		}
		else{
			if(maks < counter) maks = counter;
			counter = 1;
		}
	}
	
	if(maks<counter) maks = counter;
	
	cout<<maks<<"\n";	
	
	return 0;
}