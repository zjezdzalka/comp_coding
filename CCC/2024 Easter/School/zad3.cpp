#include<bits/stdc++.h>
#include<fstream>
using namespace std;
vector<pair<int,int>> values(int money[], int n, int looking){
	reverse(money, money+n);
	vector<pair<int,int>> a = {};
	for(int i=0;i<n;++i){
		if(looking/money[i] >= 1){
			a.push_back(make_pair(looking/money[i], money[i]));
			looking %= money[i];
		}
	}
	return a;
}
int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	//cout.tie(NULL);
	ofstream file;
	file.open("output3_5.txt");
	int n,c;
	cin>>n>>c;
	int money[n][c];
	int i,j,k;
	for(i=0;i<n;++i){
		for(j=0;j<c;++j){
			cin>>money[i][j];
		}
		for(k=1;k<=100;++k){
			vector<pair<int,int>> a = values(money[i], c, k);
			for(int p = 0;p<a.size();++p){
				file<<a[p].first<<"x"<<a[p].second<<" ";
			}
			file<<"\n";
		}
	}
	file.close();
	return 0;
}