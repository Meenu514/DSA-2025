#include <iostream>
using namespace std;

bool f(int i, string &s) {
    if (i >= s.size() / 2) return true;
    if (s[i] != s[s.size() - i - 1]) return false;
    return f(i + 1, s);
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    if (f(0, s))
        cout << "Palindrome\n";
    else
        cout << "Not a Palindrome\n";

    return 0;
}
