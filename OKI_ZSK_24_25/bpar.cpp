#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin>>n;

    string s = "";

    while(n>0){
        short temp = n%5;
        switch (temp){
            case 0:
                s += "0";
                break;
            case 1:
                s += "2";
                break;
            case 2:
                s += "4";
                break;
            case 3:
                s += "6";
                break;
            case 4:
                s += "8";
                break;
            default:
                break;
        }
        n /= 5;
    }

    reverse(s.begin(), s.end());

    cout<<s<<"\n";

    return 0;
}