#include<bits/stdc++.h>
using namespace std;

int bs(int poczatek, int koniec, int szukana, vector<int> &tab){
    while(poczatek < koniec){
        int srodek = (poczatek + koniec)/2;
        if(tab[srodek] < szukana) poczatek = srodek + 1;
        else koniec = srodek;
    }
    return tab[poczatek] == szukana;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    int i;
    cin >> n >> m;

    vector<int> tab(n,0);
    int num;

    for(i = 0; i < n; i++){
        cin >> num;
        tab[i] = num;
    }

    sort(tab.begin(), tab.end());

    int count = 0;

    for(i = 0; i < m; i++){
        cin >> num;
        if(!bs(0,n-1,num,tab)) count += 1;
    }

    cout<<count;

    return 0;
}