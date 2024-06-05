#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=16;++i){
		for(int j=1;j<=i;++j){
			if(8*i - 7*j == 56){
				cout<<i<<" "<<j<<endl;
			}
		}
	}
	return 0;
}