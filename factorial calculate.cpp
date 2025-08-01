#include <bits/stdc++.h>
using namespace std;

int* printDivisors(int n, int &size) {
    vector<int> ls;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ls.push_back(i);
            if (i != n / i)
                ls.push_back(n / i);
        }
    }

    sort(ls.begin(), ls.end());

    size = ls.size();
    int* result = new int[size];

    for (int i = 0; i < size; i++) {
        result[i] = ls[i];
    }

    return result;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int size;
    int* divisors = printDivisors(n, size);

    cout << "Divisors of " << n << " are: ";
    for (int i = 0; i < size; i++) {
        cout << divisors[i] << " ";
    }
    cout << endl;

    delete[] divisors; // memory cleanup
    return 0;
}
