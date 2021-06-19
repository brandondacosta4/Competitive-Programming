void plusMinus(vector<int> arr) {
    int poscount = 0 , negcount = 0, zerocount = 0;
    for(int i = 0; i < arr.size(); i ++ ){
        if(arr[i] > 0){
            poscount++;
        }
        else if(arr[i] < 0){
            negcount++;
        }
        else{
            zerocount++;
        }
    }
    printf("%.3f\n",(float)poscount/arr.size());
    printf("%.3f\n",(float)negcount/arr.size());
    printf("%.3f\n",(float)zerocount/arr.size());
}
