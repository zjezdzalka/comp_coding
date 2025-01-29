#include<iostream>
#include<algorithm>

int values[1000002];     // 1 <= n <= 10^6

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	
	int n,m;
	std::cin>>n>>m;
	
	int i, maks = -1, num, add = 0;
	
	for(i=0;i<m;++i){
		std::cin>>num;
		
		values[num] = values[num]+1 > add+1 ? values[num]+1 : add+1;

		if(num != n+1) maks = values[num] > maks ? values[num] : maks;
		else add = maks;
	}
	
	for(i=1;i<=n;++i){
		std::cout<<(add > values[i] ? add : values[i])<<" ";
	}
	
	return 0;
}