
vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector <int> ans;
    int alice = 0;
    int bob = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] > b[i]){
            alice ++;
        }
        else if(b[i] > a[i]){
            bob ++;
        }
    }
    ans.push_back(alice);
    ans.push_back(bob);
    return ans;

}
