#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int ttt;
    cin>>ttt;

    map<string,int> m;
    int max = 0;
    string max_name = "";

    while(ttt--){
        string n;
        cin>>n;
        
        int score;
        cin>>score;

        if(m[n]){
            m[n]+=score;
            if(m[n]>max){
                max = m[n];
                max_name = n;
            }
        }
        else{
            m[n]=score;
            if(m[n]>max){
                max = m[n];
                max_name = n;
            }
        }
    }

    cout<<max_name<<"\n";



    return 0;
}