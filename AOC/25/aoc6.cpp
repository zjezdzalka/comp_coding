#include<bits/stdc++.h>
using namespace std;
// works correctly
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ifstream file;
	file.open("inputd6.txt");
	string x;
	unsigned long long sum = 0;
    vector<vector<unsigned long long>> all_arr;
    vector<char> operations;
    bool isOperation = false;
	while(getline(file,x)){
        string num = "";
        vector<unsigned long long> arr;
        unsigned long long rep = 0;
		for(int i=0;i<x.size();++i){
            if(x[i] == '*' || x[i] == '+'){
                operations.push_back(x[i]);
                isOperation = true;
                continue;
            }
            if(isOperation){
                continue;
            }
            if(x[i] == ' ' && num != ""){
                for(int j=0;j<num.size();++j){
                    rep = rep * 10;
                    rep += (num[j] - '0');
                }
                arr.push_back(rep);
                num = "";
                rep = 0;
            }
            else{
                if(x[i] != ' ') num += x[i];
            }
        }

        if(num != ""){
            for(int j=0;j<num.size();++j){
                rep = rep * 10;
                rep += (num[j] - '0');
            }
            arr.push_back(rep);
            num = "";
            rep = 0;
        }

        all_arr.push_back(arr);
	}
	
    vector<unsigned long long> results;

    for(int i=0;i<all_arr.size()-1;++i){
        for(int j=0;j<all_arr[i].size();++j){
            if(i == 0){
                results.push_back(all_arr[i][j]);
            }
            else{
                if(operations[j] == '*'){
                    results[j] *= all_arr[i][j];
                }
                else{
                    results[j] += all_arr[i][j];
                }
            }
        }
        cout<<endl;
    }

    unsigned long long sum_result = 0;

	for(unsigned long long x: results){
        cout<<x<<" ";
        sum_result += x;
    }
    
    cout<<endl<<sum_result;

	return 0;
}
