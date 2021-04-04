#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, x(0);
    string l;
    cin >>n;
    while(n--){
        cin >> l;
        if (l[1] == '+'){
            ++x;
        }
        else if(l[1] == '-'){
            x--;
        }
        cout << x;
    }
}
