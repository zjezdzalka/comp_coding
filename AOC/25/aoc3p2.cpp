#include<bits/stdc++.h>
using namespace std;
// works correctly
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ifstream file;
	file.open("inputd3.txt");
	string x;
	unsigned long long sum = 0;
	while(file>>x){
		int i;
		int size = x.size();
		vector<int> arr(12, 0);
		for(i=0;i<size;++i){
			if(x[i] - '0' > arr[0] && i<size-11){ arr[0] = x[i] - '0'; fill(arr.begin()+1, arr.end(), 0); }
			else if(x[i] - '0' > arr[1] && i<size-10){ arr[1] = x[i] - '0'; fill(arr.begin()+2, arr.end(), 0); }
			else if(x[i] - '0' > arr[2] && i<size-9){ arr[2] = x[i] - '0'; fill(arr.begin()+3, arr.end(), 0); }
			else if(x[i] - '0' > arr[3] && i<size-8){ arr[3] = x[i] - '0'; fill(arr.begin()+4, arr.end(), 0); }
			else if(x[i] - '0' > arr[4] && i<size-7){ arr[4] = x[i] - '0'; fill(arr.begin()+5, arr.end(), 0); }
			else if(x[i] - '0' > arr[5] && i<size-6){ arr[5] = x[i] - '0'; fill(arr.begin()+6, arr.end(), 0); }
			else if(x[i] - '0' > arr[6] && i<size-5){ arr[6] = x[i] - '0'; fill(arr.begin()+7, arr.end(), 0); }
			else if(x[i] - '0' > arr[7] && i<size-4){ arr[7] = x[i] - '0'; fill(arr.begin()+8, arr.end(), 0); }
			else if(x[i] - '0' > arr[8] && i<size-3){ arr[8] = x[i] - '0'; fill(arr.begin()+9, arr.end(), 0); }
			else if(x[i] - '0' > arr[9] && i<size-2){ arr[9] = x[i] - '0'; fill(arr.begin()+10, arr.end(), 0); }
			else if(x[i] - '0' > arr[10] && i<size-1){ arr[10] = x[i] - '0'; fill(arr.begin()+11, arr.end(), 0); }
			else if(x[i] - '0' > arr[11] && i<size){ arr[11] = x[i] - '0'; }
		}

		for(int x : arr){
			cout<<x;
		}

		unsigned long long val = 0;
		for(i=0;i<12;++i){
			val = val*10 + arr[i];
		}
		sum += val;
		
		cout<<endl;
	}
	
	cout<<sum;
	return 0;
}
