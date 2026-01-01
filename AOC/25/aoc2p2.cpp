#include<bits/stdc++.h>
using namespace std;
// works correctly

#define ull unsigned long long

set<ull> getDivisors(int n){
    set<ull> divisors;
	if(n==1) return {};
    divisors.insert(n);
    for(int i=2;i*i<=n;++i){
        if(i*i == n){
            divisors.insert(i);
            continue;
        }
        if(n%i==0){
            divisors.insert(i);
            divisors.insert(n/i);
        }
    }
    return divisors;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ifstream file;
	file.open("input2.txt");
	string x;
	file>>x;
	string a, b;
	vector<pair<string,string>> store;
	bool wasHyphen = false;
	for(int i=0;i<x.size();++i){
		if(x[i]==','){
			store.push_back(make_pair(a,b));
			wasHyphen = false;
			a = "";
			b = "";
		}
		else if(x[i] == '-') wasHyphen=true;
		else if(!wasHyphen){
			a += x[i];
		}
		else{
			b += x[i];
		}
	}
	
	store.push_back(make_pair(a,b));
	
	int i;
	unsigned long long sum = 0;

	for(i=0;i<store.size();++i){
		pair<string,string> p = store[i];
		cout<<p.first<<" "<<p.second<<"\n";
	}
	
	// check dzielniki

	for(pair<string,string> a:store){
		unsigned long long meow=0, meowb=0;
		string fir,sec;
		fir=a.first;
		sec=a.second;
		
		for(i=0;i<fir.size();++i){
			meow*=10;
			meow+=(fir[i] - '0');
		}
		for(i=0;i<sec.size();++i){
			meowb*=10;
			meowb+=(sec[i] - '0');
		}
		
		for(ull j=meow;j<=meowb;++j){
			string num = to_string(j);
            bool isDone = true;

			int num_size = num.size();
            set<ull> divisors = getDivisors(num_size);	

            for(auto d : divisors) {
				isDone = true;
                //cout<<j<<" "<<d<<"\n";
                vector<string> ans = {};
				//2121212121
				//num_size = 10
				//d = 2,5,10
                ull val = num_size/d;
                for(ull k = 0; k<d; ++k) {
                    string part;
                    part = num.substr(k*val, val);
                    ans.push_back(part);
                }

            	for(int k = 0; k < ans.size() - 1; ++k) {
                    if(ans[k] != ans[k+1]) {
                        isDone = false;
                        break;
                    }
                }

				if(isDone) break;
            }

            if(isDone && divisors.size() != 0) { sum += j; cout << j << "\n"; }
		}
	}
	
	cout<<sum;
	
	return 0;
}
