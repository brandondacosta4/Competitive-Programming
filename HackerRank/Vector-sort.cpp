#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n = 0;
    int s = 0;
    vector <int> arr;  
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> s;
        arr.push_back(s);
        s = 0;

    }
    sort(arr.begin(), arr.end());
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
