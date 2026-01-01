#include<bits/stdc++.h>
using namespace std;
// works correctly
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ifstream file;
	file.open("input3.txt");
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
	
	int i;
	int sol = 0;
	
	for(pair<string,string> a:store){
		cout<<a.first<<" "<<a.second<<"\n";
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
		
		for(unsigned long long j=meow;j<=meowb;++j){
			string num = to_string(j);
			if(num.size()%2==1) continue;
			
			int num_size = num.size();
			
			bool isPossible = true;
			
			for(i=0;i<(num_size/2);++i){
				if(num[i] != num[i + (num_size/2)]){
					isPossible = false;
					break;
				}
			}
			
			if(isPossible) sol +=1;
		}
	}
	
	cout<<sol;
	
	return 0;
}
