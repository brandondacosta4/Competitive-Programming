#include <bits/stdc++.h>

using namespace std;

int main(){
    long long m, n, k;
    cin >> m >> n >> k;

    char art[m][n];
    long long gcount = 0;
    
    for(long long i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            art[i][j] = 'B';
        }
    }
    
    for(long long i = 0; i < k; i++){
        char choice;
        int num;
        cin >> choice; 
        cin >> num; 
        num--;
        if(choice == 'R'){
            for(long long x = 0; x < n; x++){
                if(art[num][x] == 'G'){
                    art[num][x] = 'B';
                }
                else{
                    art[num][x] = 'G';
                }
            }
        }
        else if(choice == 'C'){
             for(long long x = 0; x < m; x++){
                if(art[x][num] == 'G'){
                    art[x][num] = 'B';
                }
                else{
                    art[x][num] = 'G';
                }
            }
        }

    }
    
    for(long long i = 0; i < m; i++){
        for(long long j = 0; j < n; j++){
            
            if(art[i][j] == 'G'){
                gcount++;
            }
        }
    }
    cout << gcount;
    system("Pause");
}
