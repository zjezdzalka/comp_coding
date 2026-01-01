#include<bits/stdc++.h>
using namespace std;
// works correctly
#define ll long long

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ifstream file;
	file.open("inputd4.txt");
	vector<string> input;
    vector<string> new_input;
    int rolls = 0;
    int total_sum = 0;
    string x;
    while(getline(file, x)){
        input.push_back(x);
    }

    do{
        rolls = 0;
        for(int i=0;i<input.size();++i){
            string new_line = "";
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

                    if(surrounding<4) { rolls += 1; cout<< "#"; new_line += "."; }
                    else { cout<<"@"; new_line += "@"; }
                }
                else { cout<<"."; new_line += "."; }
            }
            cout<<endl;
            new_input.push_back(new_line);
        }

        cout<<rolls<<"\n";
        total_sum += rolls;
        input = new_input;
        new_input.clear();
    }
    while(rolls != 0);

    cout<<endl<<"Total sum: "<<total_sum<<"\n";

	return 0;
}
