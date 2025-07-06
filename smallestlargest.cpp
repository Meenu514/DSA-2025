#include <iostream>
using namespace std;


   int main(){
    int arr[] ={5,15,22,1,-15,24};
    int size =6;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    
   for(int i=0;i<size; i++){
   smallest = min(arr[i], smallest);
    largest = max(arr[i], largest);
   }
   cout<< "smallest= "<<smallest <<endl;
   cout<< "largest= "<<largest <<endl;
    return 0;
 }