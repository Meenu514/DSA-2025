#include <bits/stdc++.h>
using namespace std;

void insertionsort(int arr[], int n) {
    for (int i = 0; i <=n-1 ; i++) {
        int j=i;
        
       while(j> 0 && arr[j-1] >arr[j]){
           
               int temp =arr[j-1];
            arr[j-1] =arr[j];
        arr[j] = temp;   
    j--;         
        }
    }}
       
       

int main() {
    int n;
    cin >> n; // number of elements
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++)  cin >> arr[i];
    

    // Sort array
    insertionsort(arr, n);

    // Output sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
  

    return 0;
}
