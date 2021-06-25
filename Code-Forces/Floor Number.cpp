#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    vector <int> ans; 

    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int f = 2, floor = 1;
        while(f < n){
            f += x;
            floor++;
        }
        ans.push_back(floor);
    }
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }

}
