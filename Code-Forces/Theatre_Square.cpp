#include <bits/stdc++.h>

using namespace std;

int main(){
    double m, n, a;
    long long x, y, ans;
    cin >> n >> m >> a;
    x = ceil(m/a);
    y = ceil(n/a);
    ans = x * y;
    cout << ans;
}