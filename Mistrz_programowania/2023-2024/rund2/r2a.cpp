#include<iostream>
using namespace std;
int main(){
	char a,b,c;
	cin>>a>>b>>c;
	if(c=='Z') c = 'A';
	else c += 1;
	cout<<a<<" "<<b<<" "<<c;
}