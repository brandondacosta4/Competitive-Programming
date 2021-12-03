#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int sTotal;

    ifstream in;
    in.open("Day2.txt");

    while(!in.eof()) {
	    getline(in, s);
	    sTotal ++;	
    }

    string type;
    int amount = 0;
    int h = 0, d = 0;
    int aim = 0;
    

    for(int i = 0; i < sTotal; i++){
        cin >> type >> amount;

        if(type == "up"){
            
            aim -= amount;

        }
        else if(type == "down"){
            aim += amount;
        }
        else{
            h += amount;
            d += aim * amount;
        }
    }
    
    cout << h * d;

}
