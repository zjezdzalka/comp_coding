#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;
    cin>>n>>k;

    double max = 0;

    vector<int> a(k+2,0);
    int i;
    for(i=1;i<=k;++i) cin>>a[i];
    a[k+1] = n;

    sort(a.begin()+1, a.end()-1);

    for(i=1;i<k;++i) if(max < (a[i+1]-a[i]) / 2.0) max = (a[i+1]-a[i]) / 2.0;

    if(a[1] - a[0] > max) max = a[1] - a[0];
    if(n-a[k] > max) max = n-a[k];

    cout<<fixed<<setprecision(1)<<max<<"\n";

    return 0;
}