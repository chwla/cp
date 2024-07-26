#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    for (int d = 0; d < n; ++d) {
        bool valid = true;
        int rain_on_d = a[d];
        
        for (int j = max(0, d - x); j < d; ++j) {
            if (a[j] <= rain_on_d) {
                valid = false;
                break;
            }
        }
        
        if (valid) {
            for (int j = d + 1; j <= min(n - 1, d + y); ++j) {
                if (a[j] <= rain_on_d) {
                    valid = false;
                    break;
                }
            }
        }

        if (valid) {
            cout << (d + 1) << endl;
            return 0;
        }
    }
    
    return 1; 
}
