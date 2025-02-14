#include<bits/stdc++.h>
using namespace std;

int solve(ofstream& file, vector<pair<int,int>> inOut = {}, map<int, bool> checked = {}, vector<int> arr = {}, int lev = 0, int n = 0){
    if (lev == n) { // w tym momencie jest permutacja od 1..n
        int i, j;
        int lines_used = 0; // ilość liń które są zajęte

        vector<vector<int>> lines(n, vector<int>(8, 0)); // n rzędów po 8 falseów, oznaczających, czy ktoś siedzi na danym miejscu na danej stacji

        for (i = 0; i < n; ++i) {
            pair<int, int> cur = inOut[arr[i] - 1]; // miejsce wsiadania i wysiadania dla elementu w kolejności permutacji

            int start = cur.first-1; // wsiadanie
            int end = cur.second-1; // wysiadanie

            bool isPossible = true;

            for (j = 0; j < n; ++j) {
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
                    }
                    lines_used = max(lines_used, j + 1); // największa liczba linii użyta (miejsc)
                    break;
                }                
            }
        }

        if (lines_used <= 6) 
        {
            for (i = 0; i < n; ++i) {
                file<< arr[i] << " ";
            }

			file<<endl<<"Graph:"<<endl;
			
			for(i=0;i<n;++i){
				for(j=0;j<7;++j){
					file<<lines[i][j]<<" ";
				}
				file<<endl;
			}

            return 1;
        } else {
            return 0;
        }
    }

    int i;
    int res = 0; // ilość wyników
    
    for(i=1;i<=n;++i){
        if(checked[i]){
            continue; // jeśli i już było użyte to omiń
        }
        else{
            arr.push_back(i); // dodaje i do permutajci
            checked[i] = true; // zaznacza że element i jest już użyty
            res += solve(file, inOut, checked, arr, lev+1, n); // wypisz ilość wyników podciągów permutacji spełniających warunki
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
	file.open("zad12_test.txt");

    vector<int> arr;
    map<int, bool> checked;
    file << solve(file, inOut, checked, arr, 0, n) << "\n"; // rozwiąż zadanie
  
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