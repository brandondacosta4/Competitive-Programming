#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, bills = 0;
    cin >> n;

    while(n > 0){
        if(n >= 100){
            bills++;
            n = n - 100;
            
        }
        else if(n >= 20){
            bills++;
            n = n - 20;
            
        
        }
        else if(n >= 10 ){
            bills++;
            n = n - 10;
           
        }
        else if( n >= 5 ){
            bills++;
            n = n - 5;
            
        }
        else if(n >= 1){
            bills++;
            n = n - 1;
            
        }

    }
    cout << bills;

    
    
}
