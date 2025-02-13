#include<bits/stdc++.h>
using namespace std;

int sum(int x){
    int i;
    int sums = 1;

    for(i=2; i*i<=x; ++i){
        if(x%i==0){
            sums += i;
            if(i*i != x) sums += x/i;
        }
    }

    return sums;
}

int sum(long long x){
    int i;
    int sums = 1;

    for(i=2; i*i<=x; ++i){
        if(x%i==0){
            sums += i;
            if(i*i != x) sums += x/i;
        }
    }

    return sums;
}

bool find_el(vector<pair<int,int>> pairs, pair<int,int> el){
    for(int i = 0;i < pairs.size(); ++i){
        if(pairs[i].first == el.first && pairs[i].second == el.second) return true;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int i;
    int lower, upper;

    cin>>lower>>upper;

    vector<pair<int,int>> pairs;

    int counter = 0;

    for(i=lower; i<=upper; ++i){
        long long sums = sum(i);
        if(sum(sums) == i && sums >= lower && sums <= upper && sums != i){
            if(find_el(pairs, {sums, i})) continue;
            else{
                cout<<i<<" "<<sums<<"\n";
                counter += 1;
                pairs.push_back({i, sums});
            }
        }
    }

    if(counter == 0) cout<<"BRAK\n";

    return 0;
}