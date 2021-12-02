#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int sTotal;

    ifstream in;
    in.open("Day1.txt");

    while(!in.eof()) {
	    getline(in, s);
	    sTotal ++;	
    }

    int bigger = 0;
    vector <int> arr;

    for(int i = 0; i < sTotal; i++){
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);

    }

    for(int i = 1; i < arr.size(); i++){
        int current = arr[i];
        int prev = arr[i - 1];
        if(current > prev){
            bigger++;
        }
    }

    in.close();
    cout << bigger;
    system("pause");

}
