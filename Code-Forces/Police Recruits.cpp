#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int avail =0 , unavail=0, n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;

        if(temp > 0){
            avail += temp;
        }

        else{
            if(avail < 1){
                unavail++;
            }
            else{
                avail--;
            }

        }
    }

    cout << unavail;
    

    
}
