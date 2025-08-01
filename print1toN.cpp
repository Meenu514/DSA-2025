#include <iostream>
using namespace std;

void printNumbers(int i, int n) {
    if (i > n) return;             // base condition
    cout << i << " ";              // print current number
    printNumbers(i + 1, n);        // recursive call with next number
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    printNumbers(1, n);            // start from 1
    return 0;
}
