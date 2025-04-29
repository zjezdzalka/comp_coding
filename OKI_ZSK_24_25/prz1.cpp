#include<iostream>

int values[1000002];  

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int n,m;
	std::cin>>n>>m;
	
	int maks = 0, num, add = 0;
	
	while(m--){
		std::cin>>num;
		
		int pos = n-num;

		values[pos] = values[pos] > add ? values[pos]+1 : add+1;

		if (num != n+1) {
			if (values[pos] > maks) 
				maks = values[pos];
		} 
		else {
			add = maks;
		}	
	}
	
	while(n--){
		std::cout<<(add > values[n] ? add : values[n])<<" ";
	}
	
	return 0;
}