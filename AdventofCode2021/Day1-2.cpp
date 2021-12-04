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
    vector <int> windows;
    for(int i = 2; i < arr.size(); i++){
        windows.push_back(arr[i] + arr[i - 1] + arr[i - 2]);
    }

    for(int i = 1; i < windows.size(); i++){
        
        if(windows[i] > windows[i -1]){
            bigger++;
        }
    }

    in.close();
    cout << bigger;
    system("pause");

}
