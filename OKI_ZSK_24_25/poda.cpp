#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin>>n;

    long long i;

    int sum = 0;

    for(i=2;i*i<=n;++i){
        while(n%i == 0){
            sum += 1;
            n /= i;
        }
    }

    if(n>1) sum+=1;
    cout<<sum<<"\n";

    return 0;
}