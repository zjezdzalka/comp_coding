#include<bits/stdc++.h>
using namespace std;

bool isPalindrom(int x){
	int temp_x = x;
	int rev = 0;
	
	while(temp_x>0)
	{
		rev *= 10;
		rev += temp_x % 10;
		temp_x /= 10;
	}
	
	return rev == x;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int x;
	cin>>x;
	int sum = 0;
	
	while(!isPalindrom(x)){
		x += 1;
		sum += 1;
	}
	
	cout<<sum;
	
	return 0;
}