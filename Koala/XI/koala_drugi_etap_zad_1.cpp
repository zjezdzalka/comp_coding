#include<iostream>
#include <fstream>
using namespace std;
int amount[12];
int main(){
	int sum=0;
	ofstream output;
	output.open("output.txt");
	int i,j,k,l,m,n,o,p,q,r,s;
	for(i=1;i<=3;++i){
		for(j=1;j<=4;++j){
			for(k=1;k<=5;++k){
				for(l=2;l<=6;++l){
					for(m=3;m<=7;++m){
						for(n=4;n<=8;++n){
							for(o=5;o<=9;++o){
								for(p=6;p<=10;++p){
									for(q=7;q<=10;++q){
										for(r=8;r<=10;++r){
											bool isCorrect = true;
											for(int xy = 0; xy<=10; ++xy){
												amount[xy] = 0;
											}
											output<<endl<<i<<" "<<j<<" "<<k<<" "<<l<<" "<<m<<" "<<n<<" "<<o<<" "<<p<<" "<<q<<" "<<r<<"\n";
											amount[i] += 1;
											amount[j] += 1;
											amount[k] += 1;
											amount[l] += 1;
											amount[m] += 1;
											amount[n] += 1;
											amount[o] += 1;
											amount[p] += 1;
											amount[q] += 1;
											amount[r] += 1;
											for(int xy = 1; xy<=10; ++xy){
												if(amount[xy]>1 || amount[xy]==0){
													output<<"false";
													isCorrect = false;
													break;
												}
											}
											if(isCorrect){
												sum++;
												output<<"true";
											}
											
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	output<<endl<<"sum: "<<sum;
	output.close();
	return 0;
}