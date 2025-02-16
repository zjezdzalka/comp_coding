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

    int a,b,c,d;

    cin>>a>>b>>c>>d;

    int e = a*d + c*b;
    int f = b*d;

    int g = __gcd(e,f);

    cout<<e/g<<"/"<<f/g<<endl;

    return 0;
}