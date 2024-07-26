#include <bits/stdc++.h>
using namespace std;

bool canFormHash(string p, string h) {
    int n = p.length();
    int m = h.length();
    if (n > m) return false;

    vector<int> p_count(26, 0), h_count(26, 0);
    for (char c : p) p_count[c - 'a']++;

    for (int i = 0; i < n; ++i) h_count[h[i] - 'a']++;

    if (p_count == h_count) return true;

    for (int i = n; i < m; ++i) {
        h_count[h[i] - 'a']++;
        h_count[h[i - n] - 'a']--;
        if (p_count == h_count) return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string p, h;
        cin >> p >> h;
        if (canFormHash(p, h)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
