#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
	ofstream file;
	file.open("response_3_1.txt");
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int i;
	for(i=0;i<n;++i){
		int x,y;
		cin>>x>>y;
		char board[y+2][x+2];
		int j,k;
		pair<int,int> tree;
		for(j=1;j<=y;++j){
			for(k=1;k<=x;++k){
				cin>>board[j][k];
				if(board[j][k] == 'X'){ tree = make_pair(j,k);}
			}
		}
		string algorithm;
		cin>>algorithm;
		vector<pair<int,int>> positions;
		pair<int,int> current;
		bool isValid = false;
		for(j=1;j<=y;++j){
			for(k=1;k<=x;++k){
				current = make_pair(j,k);
				bool checkPos = true;
				positions.push_back(current);
				
				if(!checkPos){
					isValid = false;
				}
				else{
					for(int l = 0; l<algorithm.size();++l){
						if(algorithm[l] == 'W'){
							current.first -- ;
						}
						else if(algorithm[l] == 'S'){
							current.first ++;
						}
						else if(algorithm[l] == 'A'){
							current.second--;
						}
						else{
							current.second++;
						}
						if(current.first == 0 || current.first == y+1 || current.second == 0 || current.second == x+1){
							checkPos = false;
							break;
						}
						if(current == tree){
							checkPos = false;
							break;
						}
						for(int l = 0; l<positions.size();++l){
							if(positions[l] == current){
								checkPos = false;
								cout<<j<<" "<<k<<": "<<current.first<<" "<<current.second<<"\nFOUND\n";
								break;
							}
						}
						positions.push_back(make_pair(current.first, current.second));
						if(current.first == 0 || current.first == y+1 || current.second == 0 || current.second == x+1){
							checkPos = false;
						}
					}
					
					if(positions.size() != x*y) checkPos = false;
					if(checkPos) isValid = true;
				}
				if(isValid)break;
			}
			if(isValid)break;
		}
		if(isValid) cout<<"VALID\n";
		else cout<<"INVALID\n";
		/*cin>>asd2[i];
		int max_right = 0;
		int max_left = 0;
		int max_top = 0;
		int max_down = 0;
		int counter_x = 0;
		int counter_y = 0;
		for(int j=0;j<asd2[i].size();++j){
			switch(asd2[i][j]){
				case 'W':
					counter_y++;
					break;
				case 'D':
					counter_x++;
					break;
				case 'S':
					counter_y--;
					break;
				case 'A':
					counter_x--;
					break;
			}
			
			
			if(counter_x > max_right){
				max_right = counter_x;
			}
			else if(counter_x < max_left){
				max_left = counter_x;
			}
			
			if(counter_y > max_top){
				max_top = counter_y;
			}
			else if(counter_y < max_down){
				max_down = counter_y;
			}
			
			//if(asd[asd2[i][j]] == NULL) asd[asd2[i][j]] = 1;
			// else asd[asd2[i][j]] += 1;
		}
		file<<abs(max_right - max_left)+1<<" "<<abs(max_top - max_down)+1<<"\n";
		// file<<asd['W']<<" "<<asd['D']<<" "<<asd['S']<<" "<<asd['A']<<"\n";
		*/
	}
	return 0;
}