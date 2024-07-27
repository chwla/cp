#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;

        vector<vector<int>> new_a(n + 1, vector<int>(26, 0));
        vector<vector<int>> new_b(n + 1, vector<int>(26, 0));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < 26; ++j) {
                new_a[i + 1][j] = new_a[i][j];
                new_b[i + 1][j] = new_b[i][j];
            }
            new_a[i + 1][a[i] - 'a']++;
            new_b[i + 1][b[i] - 'a']++;
        }

        while (q--) {
            int l, r;
            cin >> l >> r;
            l--; 
            r--;

            vector<int> count_a(26, 0), count_b(26, 0);
            for (int j = 0; j < 26; ++j) {
                count_a[j] = new_a[r + 1][j] - new_a[l][j];
                count_b[j] = new_b[r + 1][j] - new_b[l][j];
            }

            int new_count = 0;
            for (int j = 0; j < 26; ++j) {
                new_count += abs(count_a[j] - count_b[j]);
            }
            cout << new_count / 2 << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
