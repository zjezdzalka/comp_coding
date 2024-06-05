#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int r;
	cin>>r;
	int domy[r];
	int i;
	for(i=0;i<r;++i){
		cin>>domy[i];
	}
	sort(domy,domy+r);
	long long sum=0;
	int previous = 0;
	int counter = 0;
	vector<int>list;
	for(i=0;i<r;++i){
		if(domy[i] != 0 && previous != domy[i]){
			previous = domy[i];
			sum += domy[i];
			counter += 1;
			list.push_back(domy[i]);
		}
	}
	double srodek;
	if(counter%2==1){
		srodek = list[counter/2];
	}
	else{
		srodek = list[counter/2];
	}
	double sum2 = 0;
	previous = 0;
	for(i=0;i<r;++i){
		if(domy[i] != 0 && previous != domy[i]){
			previous = domy[i];
			sum2 += abs(srodek - (double)domy[i]);
		}
	}
	cout<<(long long)sum2;
	return 0;
}