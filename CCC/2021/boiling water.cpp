#include <bits/stdc++.h>

using namespace std;

int main(){
    int p, b, s; 
    cin >> b;
    p = 5 * b - 400;
    if(b < 100){
        s = 1;
    }
    else if(b > 100){
        s = -1;
    }
    else if(b == 100){
        s = 0;
    }
    cout << p;
    cout << "\n" << s;


}
