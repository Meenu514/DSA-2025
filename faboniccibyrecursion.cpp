
#include <iostream>
using namespace std;
int fab(int n) {
    if (n <= 1) return n;
    int last = fab(n - 1);
    int slast = fab(n - 2);
    return last + slast;
}

int main() {
    cout << fab(4);  // Call with correct function name
    return 0;
}