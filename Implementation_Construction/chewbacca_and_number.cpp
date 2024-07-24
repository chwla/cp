#include <iostream>
using namespace std;

int main() {
    long long x;
    cin >> x;
    
    string num = to_string(x);
    int n = num.length();

    for(int i = 0; i < n; ++i) {
        int digit = num[i] - '0';
        int inverted_digit = 9 - digit;

        if (i == 0 && inverted_digit == 0) {
            continue;
        }

        if (inverted_digit < digit) {
            num[i] = '0' + inverted_digit;
        }
    }

    cout << num << endl;

    return 0;
}