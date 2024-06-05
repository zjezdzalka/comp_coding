#include<bits/stdc++.h>
using namespace std;
pair<int,int> find(int construct[], int value, int c){
	int l,m;
	for(l=0;l<c;++l){
		for(m=0;m<c;++m){
			if(construct[l] + construct[m] == value){
				return make_pair(construct[l], construct[m]);
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,c,a;
	cin>>n>>c>>a;
	vector<pair<int,int>> asd = {};
	int i,j,k,l,m;
	for(i=0;i<n;++i){
		int construct[c];
		int values[a];
		for(j=0;j<c;++j){
			cin>>construct[j];
		}
		for(k=0;k<a;++k){
			cin>>values[k];
			asd.push_back(find(construct, values[k],c));
		}
	}
	for(i=0;i<asd.size();++i){
		cout<<asd[i].first<<" "<<asd[i].second<<"\n";
	}
	return 0;
}