#include <bits/stdc++.h>
using namespace std;

int count(int x, int n, vector<int>& cols, vector<int>& diag1, vector<int>& diag2) {
    if (x == n) return 1; 

    int results = 0;

    for (int y = 0; y < n; ++y) {
        if (cols[y] || diag1[x + y] || diag2[x - y + (n - 1)]) continue;

        cols[y] = diag1[x + y] = diag2[x - y + (n - 1)] = 1;

        results += count(x + 1, n, cols, diag1, diag2);

        cols[y] = diag1[x + y] = diag2[x - y + (n - 1)] = 0;
    }

    return results;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> cols(n, 0);
    vector<int> diag1(2 * n, 0);
    vector<int> diag2(2 * n, 0);

    int res = count(0, n, cols, diag1, diag2);
    cout << res << endl;

    return 0;
}
