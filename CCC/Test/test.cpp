#include<iostream>
using namespace std;
class Drone{
	public:
		int asd;
};
int main(){
	int n;
	Drone a;
	a.asd = 1;
	cout<<a.asd<<"\n";
	Drone b,c,d,e,f;
	Drone list[5] = {b,c,d,e,f};
	for(int i =0;i<5;++i){
		list[i].asd = ((i+1)*2);
	}
	
	for(int i=0;i<5;++i){
		cout<<list[i].asd<<"\n";
	}
	return 0;
}