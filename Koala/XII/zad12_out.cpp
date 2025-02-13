#include<bits/stdc++.h>
using namespace std;

int solve(ofstream& file, map<int, bool> checked = {}, vector<int> arr = {}, int lev = 0){
    if(lev == 9){
        int i;

        if(find(arr.begin(), arr.end(), 3) < find(arr.begin(), arr.end(), 4)){
        	if(find(arr.begin(), arr.end(), 6) > find(arr.begin(), arr.end(), 3)
        	&& find(arr.begin(), arr.end(), 6) < find(arr.begin(), arr.end(), 4)) return 0;
        	if(find(arr.begin(), arr.end(), 8) > find(arr.begin(), arr.end(), 3)
        	&& find(arr.begin(), arr.end(), 8) < find(arr.begin(), arr.end(), 4)) return 0;
		}
		
		if(find(arr.begin(), arr.end(), 5) < find(arr.begin(), arr.end(), 6)){
        	if(find(arr.begin(), arr.end(), 8) > find(arr.begin(), arr.end(), 5)
        	&& find(arr.begin(), arr.end(), 8) < find(arr.begin(), arr.end(), 6)) return 0;
		}

        if(find(arr.begin(), arr.end(), 7) > find(arr.begin(), arr.end(), 8)) return 0;

		/*
		if(find(arr.begin(), arr.end(), 6) < find(arr.begin(), arr.end(), 5)){
        	if(find(arr.begin(), arr.end(), 3) > find(arr.begin(), arr.end(), 6)
        	&& find(arr.begin(), arr.end(), 3) < find(arr.begin(), arr.end(), 5)) return 0;
		}
		
		if(find(arr.begin(), arr.end(), 8) < find(arr.begin(), arr.end(), 7)){
        	if(find(arr.begin(), arr.end(), 3) > find(arr.begin(), arr.end(), 8)
        	&& find(arr.begin(), arr.end(), 3) < find(arr.begin(), arr.end(), 7)) return 0;
        	if(find(arr.begin(), arr.end(), 5) > find(arr.begin(), arr.end(), 8)
        	&& find(arr.begin(), arr.end(), 5) < find(arr.begin(), arr.end(), 7)) return 0;
		}
        */
        
        for(i=0;i<9;++i){
        	file<<arr[i]<<" ";
		}
        
        file<<"\n";
        return 1;
    }

    int i;
    int res = 0;
    
    for(i=1;i<=9;++i){
        if(checked[i]){
            continue;
        }
        else{
            arr.push_back(i);
            checked[i] = true;
            res += solve(file, checked, arr, lev+1);
            checked[i] = false;
            arr.pop_back();
        }
    }

    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 9;
    //cin>>n;

    int values[7] = {1, 2, 3, 4, 5, 6, 7}; // Warszawa, Łowicz, Kutno, Koło, Słupca, Września, Poznań

    int i;

    ofstream file;
    file.open("zad12_testb.txt");

    //vector<pair<int,int>> inOut = {};

    /*for(i=0;i<n;++i){
        int a,b;
        cin>>a>>b;
        inOut.push_back(make_pair(a,b));
    }*/

    file<<solve(file);

    return 0;
}