#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, g;
    cin>>n;
    for(int i=0; i < n; i++){
    cin>>g ;
    if(g >= 38 and g % 5 >= 3){
        while(g % 5!= 0){
            g++;
        }
    }
    cout<< g <<endl;
    }
}
