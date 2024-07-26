#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long max_chocolates = a[n - 1];
    long long ans = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] < max_chocolates) {
            ans += a[i];
            max_chocolates = a[i];
        } else {
            long long new_chocolates = max(0LL, max_chocolates - 1);
            ans += min(new_chocolates, (long long)a[i]);
            max_chocolates = min(new_chocolates, (long long)a[i]);
        }
    }

    cout << ans << endl;
    return 0;
}
