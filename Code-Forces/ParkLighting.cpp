#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, m, t;

    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> m;

        if(n * m == 1){
            cout << 1 << "\n";
        }
        else if((n * m) %2 == 0){
            cout << (n * m) /2 << "\n";

        }
        else{
            cout << ((n*m)/2) + 1 << "\n";
        }
    }
    
 
}
