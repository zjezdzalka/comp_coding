#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    int am0, am1;
    cin>>am0>>am1;

    int i,j;
    vector<int> val(n+2, 0);

    vector<int> left(n+2, 0);

    int answers = 0;

    int ones = 0;
    int zeros = 0;

    int counter = 0;

    for(i=1;i<=n;++i){
        cin>>val[i];
        if(val[i]){
            counter += 1;
            ones += 1;
        }
        else zeros += 1;
        left[i] = counter;
    }

    int toDelete0 = zeros - am0;
    int toDelete1 = ones - am1;
    
    cout<<toDelete0<<" "<<toDelete1<<endl;

    for(i=1;i<=n;++i){
        for(j=i+1;j<=n;++j){
            int inarea1 = 0, inarea0 = 0;
            // int length = j-i-1; i..j-1
            inarea1 = left[j-1]-left[i-1];
            inarea0 = j-1-left[j-1]-(i-1-left[i-1]);
            if((am1 == ones - inarea1 + inarea0 && am0 == zeros - inarea0 + inarea1)){
                answers += 1;
                cout<<i<<" "<<j<<endl;
            }
        }
    }

    cout<<answers;

    return 0;
}