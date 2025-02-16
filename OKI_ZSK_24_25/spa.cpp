#include<bits/stdc++.h>
using namespace std;

int nwd(int a, int b){
    while(b > 0){
        int c = a%b;
        a = b;
        b = c;
    }
    return a;
}

int nww(int a, int b){
    return a*b/nwd(a,b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    int a,b;

    cin>>a;
    a += 1;

    n -= 1;

    while(n--){
        cin>>b;
        b += 1;
        a = nww(a,b);
    }

    cout<<a-1<<"\n";

    return 0;
}