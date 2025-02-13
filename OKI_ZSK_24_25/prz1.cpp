#include<iostream>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	
	int n,m;
	std::cin>>n>>m;

	int values[n+2];     // 1 <= n <= 10^6

	std::fill(values, values+n+2, 0);
	
	int maks = -1, num, add = 0;
	
	while(m--){
		std::cin>>num;
		
		values[n-num] = values[n-num]+1 > add+1 ? values[n-num]+1 : add+1;

		(num != n+1) ? maks = (values[n-num] > maks ? values[n-num] : maks) : add = maks;
	}
	
	while(n--){
		std::cout<<(add > values[n] ? add : values[n])<<" ";
	}
	
	return 0;
}