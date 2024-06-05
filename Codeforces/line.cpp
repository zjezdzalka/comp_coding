#include<bits/stdc++.h>
using namespace std;
bool check(float x, float y){
	return x>y;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	float x1,y1,x2,y2;
	int roznica_x,roznica_y;
	int i,j;
	vector<int>coords_x = {};
	vector<int>coords_y = {};
	cin>>x1>>y1>>x2>>y2;
	if(x2<x1){
		swap(x1,x2);
	}
	if(y2<y1){
		swap(y1,y2);
	}
	bool matryca[100][100];
	for(i=0;i<100;++i){
		for(j=0;j<100;++j){
			matryca[i][j] = false;
		}
	}
	int temp;
	int x1_i = x1, x2_i = x2, y1_i = y1, y2_i = y2;
	
	roznica_x = x2-x1;
	roznica_y = y2-y1;
	
	if(check(roznica_x,roznica_y)){
		float w1 = (y2-y1) / (x2-x1);
		for(i=x1_i-1;i<=x2_i-x1_i;++i){
			temp = round(w1 * i);
			coords_x.push_back(i);
			coords_y.push_back(temp);
		}
	}
	else{
		float w2 = (x2-x1) / (y2-y1);
		for(i=y1_i-1;i<=y2_i-y1_i;++i){
			temp = round(w2 * i);
			coords_x.push_back(i);
			coords_y.push_back(temp);
		}
	}
	
	for(i=0;i<=x2-x1+1;++i){
		matryca[coords_y[i]][coords_x[i]] = true;
	}
	
	for(i=0;i<100;++i){
		for(j=0;j<100;++j){
			cout<<matryca[i][j];
		}
		cout<<"\n";
	}
	return 0;
}