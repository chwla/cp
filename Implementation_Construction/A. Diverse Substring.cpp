#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n - 1; ++i) {
        unordered_map<char, int> um;
        string substring = s.substr(i, 2);

        for (char c : substring) {
            um[c]++;
        }

        bool is_diverse = true;
        for (const auto &entry : um) {
            if (entry.second > 1) {  
                is_diverse = false;
                break;
            }
        }

        if (is_diverse) {
            cout << "YES" << endl;
            cout << substring << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
