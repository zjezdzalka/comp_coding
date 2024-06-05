#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
	ofstream file;
	file.open("response_2_5.txt");
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int i;
	string asd2[n];
	int size;
	for(i=0;i<n;++i){
		cin>>asd2[i];
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
	}
	return 0;
}