#include<bits/stdc++.h>
using namespace std;
// doesnt work
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ifstream file;
	file.open("input5.txt");
	string x;
	unsigned long long sum = 0;
    map<unsigned long long,bool> wasDone;
    vector<pair<string,string>> data;

	while(getline(file,x)){
        if(x.size() == 0) { break; }
        string a = "", b = "";
        bool wasHyphen = false;
        int size = x.size();
        for(int i=0;i<size;++i){
            if(x[i] == '-') wasHyphen = true;
            else if(!wasHyphen){
                a += x[i];
            }
            else{
                b += x[i];
            }
        }

        data.push_back(make_pair(a,b));
	}

    vector<pair<unsigned long long,unsigned long long>> ranges;

    for(pair<string,string> a:data){
		unsigned long long meow=0, meowb=0;
		string fir,sec;
		fir=a.first;
		sec=a.second;
        int i;

        cout<<"Processing range: "<<fir<<" - "<<sec<<"\n";
		
		for(i=0;i<fir.size();++i){
			meow*=10;
			meow+=(fir[i] - '0');
		}
		for(i=0;i<sec.size();++i){
			meowb*=10;
			meowb+=(sec[i] - '0');
		}

        ranges.push_back(make_pair(meow, meowb));
    }

    int i,j;

    unsigned long long total = 0;

    for(i=0;i<ranges.size();++i){
        pair<unsigned long long,unsigned long long> x = ranges[i];
        total += (x.second - x.first + 1);
    }

    cout<<"Total before removing overlaps: "<<total<<"\n";

    for(i=0;i<ranges.size();++i){
        for(j=i+1;j<ranges.size();++j){
            pair<unsigned long long,unsigned long long> x = ranges[i];
            pair<unsigned long long,unsigned long long> y = ranges[j];

            if(i==j) continue;

            if((x.second >= y.first && x.first <= y.second) || (y.second >= x.first && y.first <= x.second)){
                unsigned long long startfir = x.first;
                unsigned long long endfir = x.second;
                unsigned long long startsec = y.first;
                unsigned long long endsec = y.second;

                if(startfir > startsec){
                    swap(startfir, startsec);
                    swap(endfir, endsec);
                }

                unsigned long long overlap = endfir - startsec + 1;
                total -= overlap;
                cout<<"Found overlap between ranges: "<<startfir<<"-"<<endfir<<" and "<<startsec<<"-"<<endsec<<", overlap: "<<overlap<<"\n";
            }

        }
    }
	
	cout<<total;
	return 0;
}
