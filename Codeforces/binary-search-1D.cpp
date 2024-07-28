#include<bits/stdc++.h>
using namespace std;
int maxBinSearch(int array[], int search, int begin, int end){
	while(begin+1<end){
		int srodek = (begin + end)/2;
		if(array[srodek] > search){
			end = srodek;
		}
		else{
			begin = srodek;
		}
	}
	return end + 1;
}
int minBinSearch(int array[], int search, int begin, int end){
	while(begin+1<end){
		int srodek = (begin + end)/2;
		if(array[srodek] < search){
			begin = srodek;
		}
		else{
			end = srodek;
		}
	}
	return begin + 1;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,k;
	int i;
	cin>>n;
	int numbers[n];
	for(i=0;i<n;++i){
		cin>>numbers[i];
	}
	sort(numbers, numbers+n);
	cin>>k;
	int a,b;
	int result_a,result_b;
	for(i=0;i<k;++i){
		cin>>a>>b;
		result_a = minBinSearch(numbers, a, -1, n);
		result_b = maxBinSearch(numbers, b, -1, n);
		cout<<result_b-result_a-1<<"\n";
	}
	return 0;
}