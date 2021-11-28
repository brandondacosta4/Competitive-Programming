#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; 
    cin >> n;
    int tallest = 0, count = 0;
    int arr[n];
    for(int i = 0; i < n; i ++){
        cin >> arr[i];
    }
    
    for(int i = 0; i < n; i++){
        if(arr[i] > tallest){
            tallest = arr[i];
        }
    }
    
    for(int i = 0; i < n; i++){
        if(tallest == arr[i]){
            count++;
        }
    }
    cout << count;
}


