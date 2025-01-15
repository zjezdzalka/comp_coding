#include<iostream>
#include<algorithm>

int values[1000000];

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	
	int n,m;
	std::cin>>n>>m;
	
	int i, maks = -1, num, add = 0;
	
	for(i=0;i<m;++i){
		std::cin>>num;
		num -= 1;
		if(num != n){
			values[num] = std::max(values[num]+1, add+1);
			maks = std::max(values[num], maks);
			continue;
		}
		
		add = maks;
	}
	
	for(i=0;i<n;++i){
		std::cout<<std::max(add, values[i])<<" ";
	}
	
	return 0;
}