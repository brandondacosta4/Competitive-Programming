int hurdleRace(int k, vector<int> height) {
    int highest = 0;
    for(int i = 0; i < height.size(); i++){
        if(height[i] > highest){
            highest = height[i];
        }
        
    }
    if(highest > k){
        return highest - k;
    }
    else{
        return 0;
    }

}
