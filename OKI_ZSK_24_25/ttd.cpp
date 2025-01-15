#include<bits/stdc++.h>
using namespace std;

int binSearch(int poczatek, int koniec, int szukana, int ele[]){
	while(poczatek < koniec){
		int srodek = (poczatek + koniec) / 2;
		if(ele[srodek] < szukana){
			poczatek = srodek + 1;
		}
		else{
			koniec = srodek;
		}
	}
	return koniec;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,m;
	cin>>n>>m;
	
	int ele[n+2];
	ele[0] = 1000000000;
	int pos = 1;
	int i,j;
	
	for(i=1;i<=n;++i){
		cin>>ele[i];
		if(ele[i] > ele[i-1]) ele[i] = ele[i-1];
	}
	
	reverse(ele+1, ele+n+1);
	
	for(i=0;i<m;++i){
		int number;
		cin>>number;
		if(pos+1 >= n){
			pos = n+1;
			break;
		}
		pos = binSearch(pos+1, n, number, ele);
	}
	
	cout<<n-pos+1;
	
	return 0;
}