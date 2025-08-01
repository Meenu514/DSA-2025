#include <iostream>
using namespace std;

void printNumbersReverse(int n) {
    if (n == 0) return;             // base case: stop at 0
         cout << n << " ";             // print current number
    printNumbersReverse(n - 1);     // recursive call with n - 1
 
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    printNumbersReverse(n);
    return 0;
}

