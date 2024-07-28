#include<bits/stdc++.h>
using namespace std;

void reverseArray(int numbers[], int begin, int end){
	int start = begin, ending = end;
	while(start<ending){
		swap(numbers[start-1], numbers[ending-1]);
		start++;
		ending--;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	int i;
	cin>>n;
	int numbers[n];
	int pos_left, pos_right;
	for(i=0;i<n;++i){
		cin>>numbers[i];
	}
	bool current = false;
	for(i=0;i<n-1;++i){
		if(numbers[i] > numbers[i+1]){
			current = true;
			if(pos_left == NULL) pos_left = i+1;
		}
		else if(numbers[i] == numbers[i+1]){
			cout<<"no"; break;
		}
		else if(current){
			if(pos_right == NULL) pos_right = i+1;
			else{
				cout<<"no";
				return 0;
			}
			current = false;
		}
	}
	if(current) pos_right = n;
	if(pos_left == NULL){
		pos_left = 1;
		pos_right = 1;
	}
	
	reverseArray(numbers, pos_left, pos_right);
	
	bool isSorted = true;
	for(i=0;i<n-1;++i){
		if(numbers[i] >= numbers[i+1]){
			isSorted = false;
			break;
		}
	}
	
	if(isSorted){
		cout<<"yes\n";
		cout<<pos_left<<" "<<pos_right<<"\n";
	}
	else cout<<"no\n";
	return 0;
}