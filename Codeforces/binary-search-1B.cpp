#include<bits/stdc++.h>
using namespace std;
int binSearch(int array[], int search, int begin, int end){
	while(begin+1<end){
		int middle = (begin + end)/2;
		if(search >= array[middle]){
			begin = middle;
		}
		else end = middle;
	}
	return begin + 1;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,k;
	int i;
	cin>>n>>k;
	int numbers[n];
	for(i=0;i<n;++i){
		cin>>numbers[i];
	}
	int x;
	for(i=0;i<k;++i){
		cin>>x;
		cout<<binSearch(numbers, x, -1, n)<<"\n";
	}
	return 0;
}