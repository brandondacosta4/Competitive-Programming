void miniMaxSum(vector<int> arr) {
    
    sort(arr.begin(), arr.end());
    
    int min, max;
    
    
    for(int i = 0; i < 4; i++){
        min += arr[i];
    }
    
    for(int i = 1; i < 5; i++ ){
        max += arr[i];
        
    }
