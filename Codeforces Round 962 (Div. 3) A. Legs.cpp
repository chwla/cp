#include <bits/stdc++.h>
using namespace std;        

int solve(int n) {
    int min_an = n;
    for (int i = 0; i <= n / 4; ++i) {
        int a = (n - 4 * i) / 2;
        if (a >= 0) {
            min_an = min(min_an, a + i);
        }
    }
    return min_an;
}

int main() {
    int c;
    cin >> c;
    while (c--) {
        int n;
        cin >> n;
        cout << solve(n) << std::endl;
    }
    return 0;
}