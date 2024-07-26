#include <iostream>
#include <vector>
#include <cmath> 

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> a(n);  
    vector<int> ans(n); 
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ans[i] = a[i] / 2;
        sum += ans[i];
    }

    for (int i = 0; i < n; i++) {
        if (sum == 0)
            break;

        if (a[i] % 2 != 0) {
            if (a[i] < 0 && sum > 0) {
                ans[i]--; 
                sum--;
            } else if (a[i] > 0 && sum < 0) {
                ans[i]++; 
                sum++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}
