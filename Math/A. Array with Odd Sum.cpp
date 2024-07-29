#include <bits/stdc++.h>
using namespace std;

bool solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool has_odd = false;
    bool has_even = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) has_even = true;
        else has_odd = true;
    }

    if (has_odd && has_even) {
        return true;
    } else if (has_odd && n % 2 != 0) {
        return true; 
    } else {
        return false;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        if (solve()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
