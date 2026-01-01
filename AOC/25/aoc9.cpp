#include<bits/stdc++.h>
using namespace std;
// works correctly
#define ll long long

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ifstream file;
	file.open("inputd9.txt");
	string x;
    unsigned long long max_area = 0;
    vector<pair<ll,ll>> pos;
    while(getline(file, x)){
        bool wasHyphen = false;
        int i;
        int size = x.size();
        string a="",b="";
        ll c=0,d=0;
        for(i=0;i<size;++i){
            if(x[i]==',') wasHyphen=true;
            else if(!wasHyphen){
                a += x[i];
            }
            else{
                b += x[i];
            }
        }

        for(i=0;i<a.size();++i){
            c = c*10;
            c += (a[i]-'0');
        }

        for(i=0;i<b.size();++i){
            d = d*10;
            d += (b[i]-'0');
        }

        pos.push_back(make_pair(c,d));
    } 

    int i,j;
    for(i=0;i<pos.size();++i){
        for(j=i+1;j<pos.size();++j){
            pair<ll,ll> x = pos[i];
            pair<ll,ll> y = pos[j];

            ll dy = abs(y.second - x.second - 1);
            if(dy<0) dy *= -1;

            ll dx = abs(y.first - x.first - 1);
            if(dx<0) dx *= -1;

            unsigned long long area = dx * dy;
            max_area = max(area, max_area);
        }
    }

    cout<<max_area<<"\n";
	
	return 0;
}
