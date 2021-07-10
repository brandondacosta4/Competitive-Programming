#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector <int> output;
    stringstream ss(str);
    char ch;
    int discard;
    
    while(ss >> discard){
        output.push_back(discard);
        ss >> ch;
        
    }
    
    return output;
	// Complete this function
}
