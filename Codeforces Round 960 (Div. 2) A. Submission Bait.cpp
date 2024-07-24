#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int c;
    cin >> c;
    while (c--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        sort(v.begin(), v.end(), greater<int>());
        
        int a = 0, b = 0;
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                a += v[i];
            } else { 
                b += v[i];
            }
        }

        if (a > b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
