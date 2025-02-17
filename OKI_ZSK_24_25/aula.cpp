#include<bits/stdc++.h>
using namespace std;
/*int nwd(int a, int b){
    while(b > 0){
        int c = a%b;
        a = b;
        b = c;
    }
    return a;
}*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long a,b,c,d;

    cin>>a>>b>>c>>d;

    long long e = a*d + c*b;
    long long f = b*d;

    long long g = __gcd(e,f);

    cout<<e/g<<"/"<<f/g<<endl;

    return 0;
}