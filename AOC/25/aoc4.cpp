#include<bits/stdc++.h>
using namespace std;
// works correctly
#define ll long long

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ifstream file;
	file.open("input4.txt");
	vector<string> input;
    int rolls = 0;
    int total_sum = 0;
    string x;
    while(getline(file, x)){
        input.push_back(x);
    }

    rolls = 0;
    for(int i=0;i<input.size();++i){
        int size = input[i].size();
        for(int j=0;j<size;++j){
            int surrounding = 0;
            if(input[i][j] == '@'){
                if(i-1>=0 && input[i-1][j] == '@') surrounding++;
                if(i-1>=0 && j-1>=0 && input[i-1][j-1] == '@') surrounding++;
                if(i-1>=0 && j+1<size && input[i-1][j+1] == '@') surrounding++;
                if(i+1<size && j-1>=0 && input[i+1][j-1] == '@') surrounding++;
                if(i+1<size && input[i+1][j] == '@') surrounding++;
                if(i+1<size && j+1<size && input[i+1][j+1] == '@') surrounding++;
                if(j-1>=0 && input[i][j-1] == '@') surrounding++;
                if(j+1<size && input[i][j+1] == '@') surrounding++;

                if(surrounding<4) { rolls += 1; cout<< "#"; }
                else { cout<<"@"; }
            }
            else { cout<<"."; }
        }
        cout<<endl;
    }

    cout<<rolls<<"\n";
    total_sum += rolls;


	return 0;
}
