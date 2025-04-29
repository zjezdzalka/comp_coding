#include<bits/stdc++.h>
using namespace std;

int bs(int poczatek, int koniec, int szukana, vector<pair<int,int>> &tab){
    while(poczatek < koniec){
        int srodek = (poczatek + koniec)/2;
        if(tab[srodek].first < szukana) poczatek = srodek+1;
        else koniec = srodek;
    }
    return poczatek;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b;
    int i;
    cin>>a>>b;
    vector<pair<int,int>> tab(a+2,{0,0});
    tab[a+1] = {INT_MAX, a+2};
    tab[0] = {INT_MIN, 1};

    for(i = 1; i <= a; i++){
        cin>>tab[i].first;
        tab[i].second = i+1;
    }

    sort(tab.begin(), tab.end());

    /*for(i = 0; i <= a+1; i++){
        cout<<tab[i].first<<" ";
        cout<<tab[i].second<<endl;
    }*/

    for(i = 0; i < b; i++){
        int num;
        cin>>num;
        int index = bs(0,a+1,num,tab);
        
        if(index == 1){
            cout<<a<<" ";
        }
        else if(index == a){
            cout<<0<<" ";
        }
        else{
            cout<<a-index-1<<" ";
        }
    }

    return 0;
}