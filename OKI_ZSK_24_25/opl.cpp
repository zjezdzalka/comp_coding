#include<bits/stdc++.h>
using namespace std;
int findElement(vector<int> pos, int value, bool falses[]){
	int i;
	for(i=0;i<pos.size();++i){
		if(pos[i] == value && falses[i] == false) return i;
	}
	return -1;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	vector<int> pos = {};
	short i,j;
	int num;
	
	bool isEqual = true;
	bool sideways = false;
	
	for(i=0;i<4;++i){
		cin>>num;
		pos.push_back(num);
		if(i!=0) if(pos[i] != pos[i-1]) isEqual = false;
		else continue;
	}
	
	if(pos[0] == pos[3] && pos[1] == pos[2]) sideways = true;
	
	int h,w;
	cin>>h>>w;
	
	int tablica[h][w];
	int amount = 0;
	
	for(i=0;i<h;++i){
		for(j=0;j<w;++j){
			cin>>tablica[i][j];
		}
	}
	
	for(i=0;i<h-1;++i){
		for(j=0;j<w-1;++j){
			bool falses[4] = {false,false,false,false};
			short sum = 0;
			
			if(findElement(pos, tablica[i][j], falses) != -1 && !falses[findElement(pos, tablica[i][j], falses)]){
				falses[findElement(pos, tablica[i][j], falses)] = true;
				sum += 1;
			}
			
			if(findElement(pos, tablica[i+1][j], falses) != -1 && !falses[findElement(pos, tablica[i+1][j], falses)]){
				falses[findElement(pos, tablica[i+1][j], falses)] = true;
				sum += 1;
			}
			
			if(findElement(pos, tablica[i][j+1], falses) != -1 && !falses[findElement(pos, tablica[i][j+1], falses)]){
				falses[findElement(pos, tablica[i][j+1], falses)] = true;
				sum += 1;
			}
			
			if(findElement(pos, tablica[i+1][j+1], falses) != -1 && !falses[findElement(pos, tablica[i+1][j+1], falses)]){
				falses[findElement(pos, tablica[i+1][j+1], falses)] = true;
				sum += 1;
			}
				
				
			if(sum == 4){
				if(isEqual)	amount += 6;
				else if(sideways) amount += 2;
				else amount += 1;
			}
		}
	}
	
	if(w <= 1 || h <= 1) cout<<0;
	else cout<<amount;
	
	return 0;
}