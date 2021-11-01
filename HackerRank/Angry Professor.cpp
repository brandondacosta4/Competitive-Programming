#include <bits/stdc++.h>

using namespace std;

int main(){
   int n,k,t,tmp, late;
   
   cin >> t;
   
   for(int i =0; i <t;i++){
       late = 0;
       cin >> n;
       cin >> k;
       
       for(int i=0; i< n; i++){
           cin >>tmp;
           if(tmp <= 0){
               late++ ;
           }
          
       }
       
       if(late < k){
           cout <<"YES\n";
       }
       else{
           cout << "NO\n";
       }
   }
}
