#include<bits/stdc++.h>
using namespace std;
// works correctly
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ifstream file;
	file.open("input3.txt");
	string x;
	unsigned long long sum = 0;
	while(file>>x){
		int i;
		int size = x.size();
		vector<int> arr(2, 0);
		for(i=0;i<size;++i){
			if(x[i] - '0' > arr[0] && i<size-1){ arr[0] = x[i] - '0'; fill(arr.begin()+1, arr.end(), 0); }
			else if(x[i] - '0' > arr[1] && i<size){ arr[1] = x[i] - '0'; }
		}

		for(int x : arr){
			cout<<x;
		}

		unsigned long long val = 0;
		for(i=0;i<2;++i){
			val = val*10 + arr[i];
		}
		sum += val;
		
		cout<<endl;
	}
	
	cout<<sum;
	return 0;
}
