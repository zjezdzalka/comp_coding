#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int a, b;
	cin>>a>>b;
	
	int x1 = 0, y1 = 1;
	int x2 = 1, y2 = 1;
	int x3 = 1, y3 = 0;
	
	
	
	while(x2 != a || y2 != b){
		if(a*y2 > x2*b){
			cout<<"P";
			x1 = x2;
			y1 = y2;
			x2 = x1+x3;
			y2 = y1+y3;
		}
		else if(a*y2 == x2*b){
			break;
		}
		else{
			cout<<"L";
			x3 = x2;
			y3 = y2;
			x2 = x1+x3;
			y2 = y1+y3;
		}
	}	
	
	return 0;
}