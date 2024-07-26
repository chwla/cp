#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> B(m, vector<int>(n));
    vector<vector<int>> A(m, vector<int>(n, 1));

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (B[i][j] == 0) {
                for (int k = 0; k < n; ++k) {
                    A[i][k] = 0;
                }
                for (int k = 0; k < m; ++k) {
                    A[k][j] = 0;
                }
            }
        }
    }

    vector<vector<int>> B_prime(m, vector<int>(n, 0));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                B_prime[i][j] |= A[i][k];
            }
            for (int k = 0; k < m; ++k) {
                B_prime[i][j] |= A[k][j];
            }
        }
    }
    
    bool valid = true;
    for (int i = 0; i < m && valid; ++i) {
        for (int j = 0; j < n && valid; ++j) {
            if (B[i][j] != B_prime[i][j]) {
                valid = false;
            }
        }
    }

    if (valid) {
        cout << "YES" << endl;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
