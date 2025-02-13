#include<bits/stdc++.h>
using namespace std;

int solve(ofstream& file, vector<pair<int,int>> inOut = {}, map<int, bool> checked = {}, vector<int> arr = {}, int lev = 0){
    if (lev == 4) { // w tym momencie jest permutacja od 1..n
        int i, j;
        int lines_used = 0; // ilość liń które są zajęte

        vector<vector<int>> lines(6, vector<int>(8, 0)); // 9 rzędów po 8 falseów, oznaczających, czy ktoś siedzi na danym miejscu na danej stacji

		map<int,int> counter;

        for (i = 0; i < 4; ++i) {
            pair<int, int> cur = inOut[arr[i] - 1]; // miejsce wsiadania i wysiadania dla elementu w kolejności permutacji

            int start = cur.first-1; // wsiadanie
            int end = cur.second-1; // wysiadanie

            bool isPossible = true;

            for (j = 0; j < 9; ++j) {
                isPossible = true; // iteracja dla każdego rzędu

                for (int k = start+1; k <= end; ++k) {
                    if (lines[j][k] > 0) {
                        isPossible = false; // jeśli ktoś siedzi nie jest to możliwe
                        break;
                    }
                }

                if (isPossible) {
                    for (int k = start+1; k <= end; ++k) { // do end-1 ponieważ nie ma to znaczenia jeśli ktoś później wsiada na tej stacji
                        lines[j][k] = arr[i]; // zaznacz że ktoś już siedzi na miejscu
                        
                        if(counter[arr[i]]) counter[arr[i]] += 1;
                        else counter[arr[i]] = 1;
                    }
                    lines_used = max(lines_used, j + 1); // największa liczba linii użyta (miejsc)
                    break;
                }                
            }
        }

        if (lines_used <= 2) {
            for (i = 0; i < 4; ++i) {
                file<< arr[i] << " ";
            }

			/*file<<endl<<"Graph:"<<endl;
			
			for(i=0;i<4;++i){
				for(j=0;j<8;++j){
					file<<lines[i][j]<<" ";
				}
				file<<endl;
			}*/
			
			file<<endl;

            return 1;
        } else {
            return 0;
        }
    }

    int i;
    int res = 0; // ilość wyników
    
    for(i=1;i<=4;++i){
        if(checked[i]){
            continue; // jeśli i już było użyte to omiń
        }
        else{
            arr.push_back(i); // dodaje i do permutajci
            checked[i] = true; // zaznacza że element i jest już użyty
            res += solve(file, inOut, checked, arr, lev+1); // wypisz ilość wyników podciągów permutacji spełniających warunki
            checked[i] = false; // zaznacza że element i już nie jest użyty
            arr.pop_back(); // usuwa i z permutacji
        }
    }

    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	int n;
    cin>>n;
    vector<pair<int,int>> inOut; // miejsce wejścia / wyjścia pasażerów 
    
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        inOut.push_back(make_pair(a, b));
    }

	ofstream file;
	file.open("zad12_testd.txt");

    vector<int> arr;
    map<int, bool> checked;
    file << solve(file, inOut, checked, arr, 0) << "\n"; // rozwiąż zadanie
  
		/* INPUT:
		  9
      1 7
      2 7
      1 3
      3 7
      1 4
      4 7
      1 5
      5 7
      1 6
     */
  
    return 0;
}