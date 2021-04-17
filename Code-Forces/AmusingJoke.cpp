// link to problem: https://codeforces.com/problemset/problem/141/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    string l1, l2, l3, l;
    cin >> l1 >> l2 >> l3;
    l = l1 + l2;
    sort(l3.begin(), l3.end());
    sort(l.begin(), l.end());
    if(l == l3){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

}
