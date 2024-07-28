#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string input;
	map<string,int> scores;
	vector<string> teams;
	int n;
	int i;
	cin>>n;
	for(i=0;i<n;++i){
		cin>>input;
		if(scores[input] == NULL){
			scores[input] = 1;
			teams.push_back(input);
		}
		else scores[input] ++;
	}
	
	string best_team;
	int top_goals = -1;
	
	for(i=0;i<teams.size();++i){
		if(scores[teams[i]] > top_goals){
			top_goals = scores[teams[i]];
			best_team = teams[i];
		}
	}
	cout<<best_team<<"\n";
	return 0;
}