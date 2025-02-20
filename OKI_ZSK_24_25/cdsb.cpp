#include<bits/stdc++.h>
using namespace std;

void output(int a, int b, int c, int d, int e, int f, int n, int step = 0){
    if(step == n) { cout<<a<<"/"<<b<<" "; return; }

    output(a,b,a+c,b+d,c,d,n,step+1);
    output(c,d,c+e,d+f,e,f,n,step+1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    int a = 0;
    int b = 1;
    int c = 1;
    int d = 1;
    int e = 1;
    int f = 0;

    output(a,b,c,d,e,f,n);
    cout<<e<<"/"<<f<<"\n";

    return 0;
}