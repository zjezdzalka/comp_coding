#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin>>n;
	int i;
	
	if(n != 13) cout<<"OSZUST!\n";
	else{
		map<char, int> liczba;
		string num;
		bool isPossible = true;
		for(i=0;i<n;++i){
			cin>>num;
			if((num[0] < '2' || num[0] > '9') && !(num[0] == '1' && num[1] == '0') && 
				!(num[0] == 'J' || num[0] == 'Q' || num[0] == 'K' || num[0] == 'A')){
				isPossible = false;
				break;
			}
			else{
				if(liczba[num[0]]){
					liczba[num[0]] += 1;
					if(liczba[num[0]] > 4) isPossible = false;
				}
				else liczba[num[0]] = 1;
			}
		}
		
		
		
		if(isPossible) cout<<liczba['J'] + liczba['Q']*2 + liczba['K']*3 + liczba['A']*4;
		else cout<<"OSZUST!\n";
	}
	
	return 0;
}