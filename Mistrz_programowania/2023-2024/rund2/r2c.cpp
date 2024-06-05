#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin>>n>>m;
	int i,j;
	int number, start, end, new_price;
	int product_prices[n];
	int day, min_price=-1, sum=0;
	map<int, int> prices;
	for(i=0;i<n;++i){
		cin>>product_price[i];
		sum += product_price[i];
	}
	for(i=0;i<m;++i){
		cin>>number>>start>>end>>new_price;
		for(j=start-1;j<end-1;++j){
			if(map[j] == NULL){
				map[j] = sum;
			}
			int temp = product_prices[n-1] - new_price;
			map[j] -= sum;
		}
	}
}