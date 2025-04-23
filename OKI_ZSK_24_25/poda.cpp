#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long x){
    if(x < 2) return false;
    for(long long i = 2; i*i <= x; ++i){
        if(x % i == 0) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin>>n;

    long long i;

    int sum = 0;

    if(n%2 == 0) sum = n==2?1:2; 
    else{
        for (i = n; i > 0; i--) {
            if (isPrime(i) || i == 1) {
                while (n - i >= 0) {
                    sum += 1;
                    n -= i;
                }
                i = n+1;
            }
        }
    }

    cout<<sum<<"\n";

    return 0;
}