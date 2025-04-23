#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    int i;
    long long sum = 0, front = 0;
    vector<int> val(n, 0);

    for(i=1;i<n;++i){
        cin>>val[i];
        sum += val[i];
    }

    long long min_val = LLONG_MAX;
    int min_pos = -1;

    for(i=0;i<n;++i){
        if(max(front, sum) < min_val){
            min_val = max(front, sum);
            min_pos = i;
        }
        else if(max(front, sum) == min_val){
            if(min_pos > i) min_pos = i;
        }

        front += val[i];
        sum -= val[i];
    }

    cout<<min_pos<<"\n";

    return 0;
}