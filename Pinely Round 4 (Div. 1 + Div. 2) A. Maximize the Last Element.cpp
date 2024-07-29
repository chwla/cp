#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& v) {
    while (v.size() > 1) {
        int min = INT_MAX;
        int pos = 0;
        for (int i = 0; i < v.size() - 1; ++i) {
            int curr = v[i] + v[i + 1];
            if (curr < min) {
                min = curr;
                pos = i;
            }
        }
        v.erase(v.begin() + pos);
        v.erase(v.begin() + pos);
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        solve(v);
        cout << v[0] << endl;
    }

    return 0;
}
