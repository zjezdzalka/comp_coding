#include<bits/stdc++.h>
using namespace std;
// doesnt work
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ifstream file;
	file.open("inputd6test.txt");
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
	
    vector<vector<unsigned long long>> results_vert;

    for(int i=0;i<all_arr.size()-1;++i){
        vector<unsigned long long> result;
        for(int j=all_arr[i].size()-1;j>=0;--j){
            unsigned long long val = all_arr[i][j];
            int am = 0;
            while(val != 0){
                am += 1;
                unsigned long long mod = val % 10;
                val /= 10;
                if(result.size() < am){
                    result.push_back(mod);
                }
                else{
                    result[am-1] *= 10;
                    result[am-1] += mod;
                }
            }
            
        }

        vector<unsigned long long> result_r;

        for(unsigned long long& x : result){
            unsigned long long rev = 0;
            while(x != 0){
                unsigned long long mod = x %10;
                x /= 10;
                rev = rev * 10 + mod;
            }
            x = rev;

            result_r.push_back(x);
        }

        results_vert.push_back(result_r);
    }

    unsigned long long sum_result = 0;

	for(const auto& vec: results_vert){
        for(unsigned long long x: vec){
            cout<<x<<" ";
        }
    }
    
    //cout<<endl<<sum_result;

	return 0;
}
