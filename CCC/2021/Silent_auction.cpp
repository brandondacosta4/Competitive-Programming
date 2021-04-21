#include <bits/stdc++.h>

using namespace std;

#include <bits/stdc++.h>

using namespace std;

int main(){
    int bid, n, amount, win = 0;
    string winner, name;
    cin >> n;

    for(int i=0; i < n; i++){
        cin >> name;
        cin >> amount;
        if(amount > win){
            win = amount;
            winner = name;
        }
    }   
    cout << winner;

}
 
