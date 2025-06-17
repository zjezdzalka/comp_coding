#include<bits/stdc++.h>
using namespace std;

int binSearch(int poczatek, int koniec, int szukana, ){
    while(poczatek < koniec){
        int srodek = (poczatek + koniec)/2;
        if(tab[srodek].first < szukana) poczatek = srodek+1;
        else koniec = srodek;
    }
    return poczatek;
}

void solve(){
    int n,k,c;
    cin>>n>>k>>c;
    
}

int main(){
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    int ttt;

    while(ttt--){
        solve();
    }

    return 0;
}