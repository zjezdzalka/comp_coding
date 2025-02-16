#include<bits/stdc++.h>
using namespace std;

void sort(int a, int b, int c){
    if(a>c) swap(a,c);
    if(a>b) swap(b,c);  
    if(b>c) swap(b,c);
    cout<<a<<" "<<b<<" "<<c<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b,c;
    cin>>a>>b>>c;

    sort(a,b,c);

    return 0;
}