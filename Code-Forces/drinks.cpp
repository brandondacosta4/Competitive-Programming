#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int p;
    double ans;
    cin >> n;
    for(int i=0; i < n; i++){
        cin >> p;
        ans = ans+p;
    }

    cout << ans/n;

}
