#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int values[n];
	bool taken[n];
	vector<pair<int,int>> max;
	int i;
	int counter = n-1;
	int current = counter;
	bool second=false;
	for(i=0;i<n;++i){
		cin>>values[i];
		max.push_back(make_pair(values[i], i));
		taken[i] = false;
	}
	sort(max.begin(),max.end());
	for(i=0;i<n;++i){
		cout<<max[i].first<<" "<<max[i].second<<endl;
	}
	long long sum_l=0, sum_p=0;
	for(i=0;i<n;++i){
		bool possible = (taken[current-1]==true && taken[current+1]==true) || i == 0 || current-1 < 0 || current+1 > n-1;
		//cout<<"Possible: "<<possible<<endl;
		if(possible){
			//cout<<"None\n";
			if(!second){
				while(taken[counter] == true){
					counter --;
				}	
				sum_l += max[counter].first;
				current = max[counter].second;
				//cout<<"Counter for iteration "<<i<<": "<<counter<<endl;
				//cout<<"Current for iteration "<<i<<": "<<current<<endl;
				//cout<<"Added "<<max[counter].second<<"to a person: "<<max[counter].first<<endl;
				taken[max[counter].second] = true;
				second = true;
			}
			else{
				while(taken[counter] == true){
					counter --;
				}	
				sum_p += max[counter].first;
				current = max[counter].second;
				//cout<<"Counter for iteration "<<i<<": "<<counter<<endl;
				//cout<<"Current for iteration "<<i<<": "<<current<<endl;
				//cout<<"Added "<<max[counter].second<<"to a person: "<<max[counter].first<<endl;
				taken[max[counter].second] = true;
				second = false;
			}
		}
		else if(taken[current-1] == false && taken[current+1] == true){
			//cout<<"L\n";
			if(!second){
				current --;
				//cout<<"Current for iteration "<<i<<": "<<current<<endl;
				//cout<<"Added "<<max[current].second<<"to a person: "<<max[current].first<<endl;
				sum_l += values[current];
				taken[current] = true;
				second = true;
			}
			else{
				current --;
				//cout<<"Current for iteration "<<i<<": "<<current<<endl;
				//cout<<"Added "<<max[current].second<<"to a person: "<<max[current].first<<endl;
				sum_p += values[current];
				taken[current] = true;
				second = false;
			}
		}
		else if(taken[current-1] == true && taken[current+1] == false){
			//cout<<"R\n";
			if(!second){
				current ++;
				//cout<<"Current for iteration "<<i<<": "<<current<<endl;
				//cout<<"Added "<<max[current].second<<"to a person: "<<max[current].first<<endl;
				sum_l += values[current];
				taken[current] = true;
				second = true;
			}
			else{
				current ++;
				//cout<<"Current for iteration "<<i<<": "<<current<<endl;
				//cout<<"Added "<<max[current].second<<"to a person: "<<max[current].first<<endl;
				sum_p += values[current];
				taken[current] = true;
				second = false;
			}
		}
		else{
			//cout<<"Both\n";
			bool check = (values[current-1] > values[current+1]);
			//check?cout<<"L\n":cout<<"R\n";
			//cout<<"Check for iteration "<<i<<": "<<check<<endl;
			if(!second){
				if(check){
					current --;
					//cout<<"Current for iteration "<<i<<": "<<current<<endl;
					//cout<<"Added "<<max[current].second<<"to a person: "<<max[current].first<<endl;
					sum_l += values[current];
					taken[current] = true;
					second = true;
				}
				else{
					current ++;
					//cout<<"Current for iteration "<<i<<": "<<current<<endl;
					//cout<<"Added "<<max[current].second<<"to a person: "<<max[current].first<<endl;
					sum_l += values[current];
					taken[current] = true;
					second = true;
				}
			}
			else{
				if(check){
					current --;
					//cout<<"Current for iteration "<<i<<": "<<current<<endl;
					//cout<<"Added "<<max[current].second<<"to a person: "<<max[current].first<<endl;
					sum_p += values[current];
					taken[current] = true;
					second = false;
				}
				else{
					current ++;
					//cout<<"Current for iteration "<<i<<": "<<current<<endl;
					//cout<<"Added "<<max[current].second<<"to a person: "<<max[current].first<<endl;	
					sum_p += values[current];
					taken[current] = true;
					second = false;
				}
			}
		}
	}
	//for(i=0;i<n;++i){
	//	cout<<taken[i]<<" ";
	//}
	cout<<sum_l<<" "<<sum_p;
}