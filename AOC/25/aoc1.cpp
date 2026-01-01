#include<bits/stdc++.h>
using namespace std;
// works correctly
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ifstream file;
	file.open("input1.txt");
	int pos = 50;
	string x;
	int counter = 0;
	while(file>>x){
		int size = x.size();
		int val = 0;
		for(int i=1;i<size;++i){
			val *= 10;
			val += (x[i] - '0');
		}
		val%=100;
		if(x[0] == 'L'){
			pos -= val;
			if(pos<0) pos = 100 + pos;
		}
		else{
			pos += val;
			if(pos>99) pos %= 100;
		}
		
		cout<<x[0]<<val<<" "<<pos;
		
		if(pos == 0) { counter += 1; cout<<" FOUND "; }
		cout<<"\n";
	}
	cout<<counter;
	return 0;
}
