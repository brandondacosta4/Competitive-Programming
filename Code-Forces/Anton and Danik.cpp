#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, d = 0, a = 0;

    cin >> n;

    string games;

    cin >> games;

    for(int i =0; i < games.length(); i++){
        if(games[i] == 'A'){
            a++;
        }
        else{
            d++;
        }

    }

    if(a > d){
        cout << "Anton";
    }
    else if(d > a){
        cout << "Danik";
    }
    else{
        cout << "Friendship";
    }
    
    
}
