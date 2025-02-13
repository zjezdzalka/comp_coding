#include<bits/stdc++.h>
using namespace std;

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

	int i, j;
    int lines_used = 0; // ilość liń które są zajęte

    vector<int> arr = {1, 2, 3, 4, 6, 8, 5, 7, 9};

    vector<vector<bool>> lines(9, vector<bool>(7, false)); // 9 rzędów po 8 falseów, oznaczających, czy ktoś siedzi na danym miejscu na danej stacji

    for (i = 0; i < 9; ++i) {
        pair<int, int> cur = inOut[arr[i] - 1]; // miejsce wsiadania i wysiadania dla elementu w kolejności permutacji

        int start = cur.first-1; // wsiadanie
        int end = cur.second-1; // wysiadanie

        bool isPossible = true;

        for (j = 0; j < 9; ++j) {
            isPossible = true; // iteracja dla każdego rzędu

            for (int k = start; k <= end; ++k) {
                if (lines[j][k] == true && k > start) {
                    isPossible = false; // jeśli ktoś siedzi nie jest to możliwe
                    break;
                }
            }

            if (isPossible) {
                for (int k = start+1; k <= end; ++k) { // do end-1 ponieważ nie ma to znaczenia jeśli ktoś później wsiada na tej stacji
                    lines[j][k] = true; // zaznacz że ktoś już siedzi na miejscu
                }
                cout<<j+1<<" "<<arr[i]<<endl;
                lines_used = max(lines_used, j + 1); // największa liczba linii użyta (miejsc)
                break;
            }                
        }
    }

    for (i = 0; i < 9; ++i) {
        cout<< arr[i] << " ";
    }

    cout<<endl;

    for(i=0;i<9;++i){
        for(j=0;j<7;++j){
            cout<<lines[i][j]<<" ";
        }
        cout<<endl;
    }
  
    return 0;
}