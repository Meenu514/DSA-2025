#include <iostream>
using namespace std;


int main(){
    int n = 5;
    
  //outer loop
     for (int i = 1; i <n;  i++) {
        //for space:n-i-1
        for(int j=1; j<=n-i-1; j++ ){
            cout <<" ";
        
        }
        // num1 : i+1
 for(int j=1; j<i+1; j++){
    cout <<j;
 }
       //num2 : i to 1
for(int j=i-1; j>=1; j--){
    cout <<j;
}
   cout <<endl; 
     }
    return 0;
}
