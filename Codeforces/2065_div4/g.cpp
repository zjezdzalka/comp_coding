#include<bits/stdc++.h>
using namespace std;

bool isSemiPrime(int n){
    int primes = 0;
    int i;

    for(i=2;i*i<=n && primes < 2;++i){
        while(n%i == 0){
            n/=i;
            ++primes;
        }
    }

    if(n>1) ++primes;
    
    return primes == 2?true:false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int ttt;
    cin>>ttt;

    while(ttt--){
        int n;
        int i, j;
        cin>>n;
        int primes[n];
        for(i=0;i<n;++i){
            cin>>primes[i];
        }

        int counter = 0;

        for(i=0;i<n;++i){
            for(j=i;j<n;++j){
                if(isSemiPrime(lcm(primes[i],primes[j]))){
                    ++counter;
                }
            }
        }

        cout<<counter<<"\n";    
    }

    return 0;
}