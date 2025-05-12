#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    string a,b,c;
    cin>>a>>b>>c;

    if(a == "###" && b == ".|." && c == ".|."){
        cout<<"KILOF\n";
    }
    else if(a == ".#." && b == ".#." && c == ".|.") cout<<"MIECZ\n";
    else if((a == "##." && b == "#|." && c == ".|.") || (a == ".##" && b == ".|#" && c == ".|.")) cout<<"SIEKIERA\n";
    else{
        cout<<"NIE\n";
    }

    return 0;
}