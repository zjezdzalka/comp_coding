#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	char tablica[5][5];
	int i,j;
	vector<pair<int,int>> values;
	for(i=1;i<=3;++i){
		for(j=1;j<=3;++j){
			cin>>tablica[i][j];
			if(tablica[i][j] == 'X') values.push_back(make_pair(i,j))
		}
	}
	
	for(i=0;i<values.size();++i){
	
	}
	cout<<"NIE\n";
	return 0;
}