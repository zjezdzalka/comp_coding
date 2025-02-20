#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;

    int min256 = min(k2,min(k5,k6));
    int min32 = min(k3,k2-min256);

    cout<<min256*256+min32*32<<"\n";

    return 0;
}