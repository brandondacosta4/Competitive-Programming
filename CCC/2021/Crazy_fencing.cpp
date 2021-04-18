#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int area = 0;
    cin >> n;
    vector <int> h(n+1);
    vector <int> wid(n);

    for (int i = 0; i <= n; i++) {
        cin >> h[i];

    }
    for (int i = 0 ; i < n; i++){
        cin >> wid[i];
    }
    for(int i = 0; i < n; i++ ){
        area += (h[i] + h[i + 1]) * wid[i];
    }
    
    cout << area/2.0;

    
}
