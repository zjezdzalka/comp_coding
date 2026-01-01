#include<bits/stdc++.h>
using namespace std;
// works correctly
bool check(unsigned long long val, vector<pair<string,string>> data){
    for(pair<string,string> da: data){
        unsigned long long fir = 0;
        unsigned long long sec = 0;

        int i;

        for(i=0;i<da.first.size();++i){
            fir *= 10;
            fir += da.first[i] - '0';
        }

        for(i=0;i<da.second.size();++i){
            sec *= 10;
            sec += da.second[i] - '0';
        }

        if(val <= sec && val >= fir) return 1;
    }
    return 0;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ifstream file;
	file.open("input5.txt");
	string x;
	unsigned long long sum = 0;
    bool valuesInit = false;
    vector<pair<string,string>> data;
	while(getline(file,x)){
        unsigned long long val = 0;
        int i;
        int size = x.size();
		if(size == 0) { valuesInit = true; continue; }
        if(valuesInit){
            for(i=0;i<size;++i){
                val *= 10;
                val += x[i] - '0';
            }

            if(check(val, data)) sum += 1;
        }
        else{
            string a = "", b = "";
            bool wasHyphen = false;
            for(i=0;i<size;++i){
                if(x[i] == '-') wasHyphen = true;
                else if(!wasHyphen){
                    a += x[i];
                }
                else{
                    b += x[i];
                }
            }

            data.push_back(make_pair(a,b));
        }
	}
	
	cout<<sum;
	return 0;
}
