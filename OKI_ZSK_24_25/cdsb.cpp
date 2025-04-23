#include<bits/stdc++.h>
using namespace std;

int n;
     
void output(int&a, int&b, int&e, int&f, int& step){
    if(step == n) { cout<<a<<"/"<<b<<" "; return; }

    int c = a + e;
    int d = b + f;

    step += 1;
    output(a,b,c,d,step);
    output(c,d,e,f,step);
    step -= 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;

    int a = 0;
    int b = 1;
    int e = 1;
    int f = 0;

    int step = 0;

    output(a,b,e,f,step);
    cout<<e<<"/"<<f<<"\n";

    return 0;
}