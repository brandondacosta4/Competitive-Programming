#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    cin >> a >> b;
    
    cout << a.size() << ' ' << b.size();
    
    cout << '\n' << a + b;
    
    cout << "\n" <<  b[0];
    for(int i = 1; i < a.size(); i ++ ){
        if(i == 0){
            continue;
        }
        cout << a[i];
        
    }
    
    cout << " " << a[0];
    
    for(int i = 0; i < b.size(); i ++ ){
        if(i == 0){
            continue;
        }
        cout << b[i];
        
    }
    
  
    return 0;
}
