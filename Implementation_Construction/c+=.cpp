#include <iostream>
using namespace std;

int main() {
    int c;
    cin >> c;
    while (c--) {
        long long a, b, c;
        cin >> a >> b >> c;

        int operations = 0;

        while (a <= c && b <= c) {
            if (a < b) {
                a += b;
            } else {
                b += a;
            }
            operations++;
        }

        cout << operations << endl;
    }

    return 0;
}