#include <bits/stdc++.h>

using namespace std;

int main(){
    int w, a, b ,c, asum=0, bsum=0, csum=0;

    cin >> w;

    for(int i =0; i < w; i++){
        cin >> a >> b >> c;
        asum += a;
        bsum += b;
        csum += c;
    }
    if(asum == 0 && bsum == 0 && csum == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
