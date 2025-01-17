#include<bits/stdc++.h>
using namespace std;

bool check(string n, string x){
	int i;
	for(i=0;i<n.length();++i){
		if(n[i] != x[i]) return false;
	}
	
	if(n.length()*2+1 > x.length()) return false;
	else return true;
}

string update(string x){
	int i;
	int move = 0;
	
	for(i=x.length()-1;i>=0;--i){
		int a = x[i];
		a -= '0';
		a *= 2;
		a += move;
		
		move /= 10;
		
		if(a >= 10){
			move = a/10;
			a -= (a/10) * 10;
		}
		
		x[i] = a + '0';
	}
	
	if(move > 0){
		x = string(1,move+'0') + x;
	}
	
	return x;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string n;
	cin>>n;
	
	string x = "2";
	int counter = 1;
	
	while(!check(n,x)){
		x = update(x);
		counter += 1;
	}
	
	cout<<counter<<"\n";
	
	return 0;
}