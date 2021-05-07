#include <bits/stdc++.h>

using namespace std;

int main(){
    string previous;
    string input ="9";
    while(input != "99999"){
        cin >> input;
        int sum = (input[0] - ('0')) + (input[1] - '0');
        if(sum%2 == 1){
            previous = "left";
            cout << previous;
            cout << " " <<  input[2] << input[3] << input[4] << endl;
        }
        else if(sum == 0){
            cout << previous;
            cout << " " <<  input[2] << input[3] << input[4] << endl;
        }
        else{
            previous = "right";
            cout << previous;
            cout << " " <<  input[2] << input[3] << input[4] << endl;
        }

    }   
}
