#include<bits/stdc++.h>
using namespace std;                                                            
                                                                                
int main(){                                                                     
    ios_base::sync_with_stdio(false);                                           
    cin.tie(NULL);                                                              
    cout.tie(NULL);                                                             
                                                                                
    long long x = -1;       
    long long longest = 0;
    int counter = 0;
    int num = 0;
    int max_counter = 0;

    vector<long long> a(1000000, 0);

    while(x != 0){                                                        
        cin>>x;  
        a[counter] = x;                                                             
        counter += 1;                                                                                                                                        
    }

    sort(a.begin(), a.begin()+counter);
                                       
    for(int i = 0; i < counter; ++i){                                                    
        if(a[i] == a[i+1]){                                                        
            num += 1;                                                           
        } 
        else {                                                                 
            if(num > max_counter){                                              
                max_counter = num;                                              
                longest = a[i];                                                  
            }       
            else if(num == max_counter){                                                    
                if(a[i] > longest) longest = a[i];                               
            }
            num = 0;                                                
        }                                                                       
    }

    cout<<longest<<"\n";                                                        
                                                                                
    return 0;                                                                   
}                                                                               
