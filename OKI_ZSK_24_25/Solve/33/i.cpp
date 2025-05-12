#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    int ttt;
    cin>>ttt;

    int a,b,c;
    int i;

    while(ttt--){
        cin>>a>>b>>c;

        int counter = 0;
        unordered_set<int> x;

        int val = 0;

        for(i = 0; i < a; ++i) {
            if (x.find(val%a) == x.end()) counter++;
            x.insert(val%a);

            if (x.find((val + b)%a) == x.end()) counter++;
            x.insert((val + b)%a);

            if (x.find((val + c)%a) == x.end()) counter++;
            x.insert((val + c)%a);

            val = val 
        }

        cout<<counter;

        if(counter<a){
            cout<<"NIE\n";
        }
        else{
            cout<<"TAK\n";
        }
    }

    return 0;
}