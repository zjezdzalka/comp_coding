#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a,b;
    cin>>a>>b;

    cout<<lcm(a,b)<<" "<<gcd(a,b);

    return 0;
}