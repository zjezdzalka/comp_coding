#include<bits/stdc++.h>
using namespace std;
stack<int>kolejka_liczb;
map<int, int>ilosc_zer;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string a;
	int temp=0,max=0;
	bool previous = false;
	int i;	
	cin>>a;
	for(i=0;i<a.size();++i){
		if(a[i] == 0){
			previous = false;
			temp++;
			cout<<temp<<" ";
		}
		else{
			if(previous){
				continue;
			}
			else{
				previous = true;	
			}
		}
	}
	return 0;
}