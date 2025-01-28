#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
    string x;
    int y,z;
    cin>>x>>y>>z;

    // x < 10^15, 1 < y,z < 37

    int i;

    long long num = 0;

    for(i = 0; i<x.length(); ++i){
        num *= y;
        if(x[i] >= '0' && x[i] <= '9'){
            num += (x[i] - '0');
        }
        else{
            num += (x[i] - 'A' + 10);
        }
    }

    string con_num = "";

    while(num>0){
        int val = num%z;
        if(val < 10) con_num += to_string(val);
        else con_num += (char)(val - 10 + 'A');
        num /= z;
    }

    reverse(con_num.begin(), con_num.end());

    cout<<con_num;
	
	return 0;
}