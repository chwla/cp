#include <iostream>
#include <string>
using namespace std;

bool canTransformToPalindrome(const string& s) {
    int n = s.length();
    for (int i = 0; i < n / 2; ++i) {
        char left = s[i];
        char right = s[n - i - 1];
        if (left != right) {
            if (!(abs(left - right) == 2 || abs(left - right) == 0)) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        string s;
        cin >> n >> s;
        if (canTransformToPalindrome(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
