#include<bits/stdc++.h>
using namespace std;

int solve(int n){
    if(n == 0) return 1;
    else if (n == -1) return 0;

    return solve(n-1) + solve(n-2);
}

void comb(int n, vector<int> arr = {}){
    if(n == 0){
        for(int i = 0; i<arr.size(); ++i){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    else if(n == -1) return;
    else{
        n -= 1;

        arr.push_back(1);
        comb(n, arr);
        arr.pop_back();

        n -= 1;

        arr.push_back(2);
        comb(n, arr);
        arr.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    cout<<solve(n)<<"\n";

    comb(n);

    return 0;
}