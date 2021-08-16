int countingValleys(int steps, string path) {
    
    int count = 0;
    int altitude = 0;
    int valleys = 0;
    int past_mv = 0;
    
    
    for(int i = 0; i < steps; i++){
        if(path[i] == 'U'){
            altitude++;
            
        }
        else if(path[i] == 'D'){
            altitude--;
            
        }
        if(altitude == 0 && past_mv < 0){
            valleys++;
            
        }
        past_mv = altitude;
    }
    return valleys; 

}
