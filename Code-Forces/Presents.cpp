// link to problem: https://codeforces.com/problemset/problem/1512/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, p;
    cin >> n;
    vector <int> vec(n+1);
    for (int i = 1; i <= n; i++){
        cin >> p;
        vec[p] = i;
    }
    cout << vec[1];
    for(int i = 2; i <= n; i++ ){
        cout << " " << vec[i];
    }
}
