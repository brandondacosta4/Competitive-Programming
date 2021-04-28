// Link to problem https://codeforces.com/problemset/problem/268/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, total = 0;
    cin >> n;
    vector <int> h(n), a(n);
    for(int i=0; i < n; i++){
        cin >> h[i] >> a[i];
        for(int w=0; w < i; w++){
            if(h[w] == a[i]){
                total++;
            }
            if(a[w] == h[i]){
                total++;
            }
        }
    }
    cout << total; 
}
