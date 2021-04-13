#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int a;
    cin >> n;

    while(n>0){
        cin >> a;
        if(a == 1){
            cout << "HARD" << endl;
        }
        n -- ;
    }
    cout << "EASY";
    
}
