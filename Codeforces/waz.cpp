#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<pair<int,int>> koordy = {{0,0}};
	int m,p,n;
	int w,k,c;
	int temp1,temp2,temp3,temp4;
	int amount = 0;
	int test=0;
	char polecenie;
	bool positive=false;
	int i,j;
	cin>>m>>p>>n;
	int plansza[m][m];
	for(i=0;i<m;++i){
		for(j=0;j<m;++j){
			plansza[i][j] = -1;
		}
	}
	for(i=0;i<p;++i){
		cin>>w>>k>>c;
		w -= 1;
		k -= 1;
		plansza[w][k] = c;
	}
	plansza[0][0] = 0;
	int a,b;
	for(i=0;i<n;++i){
		cin>>polecenie;
		
		// gora
		if(polecenie=='G'){
			test = koordy.size()-1;
			a = koordy[test].first;
			b = koordy[test].second;
			a -= 1;
			if(plansza[a][b]>=0){
				koordy.emplace_back(a,b);
			}
			else{
				koordy.emplace_back(a,b);
				for(j=koordy.size();j>0;--j){
					temp1 = koordy[j].first;
					temp2 = koordy[j].second;
					temp3 = koordy[j-1].first;
					temp4 = koordy[j-1].second;
					plansza[temp1][temp2] = plansza[temp3][temp4];
				}
				koordy.erase(koordy.begin());
				amount++;
			}
		}
		
		// dol
		else if(polecenie=='D'){
			test = koordy.size()-1;
			a = koordy[test].first;
			b = koordy[test].second;
			a += 1;
			if(plansza[a][b]>=0){
				koordy.emplace_back(a,b);
			}
			else{
				koordy.emplace_back(a,b);
				for(j=koordy.size();j>0;--j){
					temp1 = koordy[j].first;
					temp2 = koordy[j].second;
					temp3 = koordy[j-1].first;
					temp4 = koordy[j-1].second;
					plansza[temp1][temp2] = plansza[temp3][temp4];
				}
				koordy.erase(koordy.begin());
				amount++;
			}
		}
		
		// lewo
		else if(polecenie=='L'){
			test = koordy.size()-1;
			a = koordy[test].first;
			b = koordy[test].second;
			b -= 1;
			if(plansza[a][b]>=0){
				koordy.emplace_back(a,b);
			}
			else{
				koordy.emplace_back(a,b);
				for(j=koordy.size();j>0;--j){
					temp1 = koordy[j].first;
					temp2 = koordy[j].second;
					temp3 = koordy[j-1].first;
					temp4 = koordy[j-1].second;
					plansza[temp1][temp2] = plansza[temp3][temp4];
				}
				koordy.erase(koordy.begin());
				amount++;
			}
		}
		
		// prawo
		else if(polecenie=='P'){
			test = koordy.size()-1;
			a = koordy[test].first;
			b = koordy[test].second;
			b += 1;
			if(plansza[a][b]>=0){
				koordy.emplace_back(a,b);
			}
			else{
				koordy.emplace_back(a,b);
				for(j=koordy.size();j>0;--j){
					temp1 = koordy[j].first;
					temp2 = koordy[j].second;
					temp3 = koordy[j-1].first;
					temp4 = koordy[j-1].second;
					plansza[temp1][temp2] = plansza[temp3][temp4];
				}
				koordy.erase(koordy.begin());
				amount++;
			}
		}
		
		
		// jakies tam inne
		else if(polecenie=='Z'){
			cin>>w>>k;
			w -= 1;
			k -= 1;
			positive = false;
			for(j=0;j<koordy.size();++j){
				if(koordy[j].first == w && koordy[j].second == k){
					cout<<plansza[w][k]<<"\n";
					positive = true;
				}
			}
			if(!positive){
				cout<<"-1\n";
			}
		}
	}
	return 0;
}