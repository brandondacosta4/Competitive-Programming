#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, tmp, max = 0, count; 
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> tmp;
        if(tmp > max) {
            max = tmp;
            count = 1;
        }
        else if(tmp == max) {
            count++;
        }
    }
    cout << count;

}

