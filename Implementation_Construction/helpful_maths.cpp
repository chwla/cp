#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> v;

    for (int i = 0; i < s.length(); i += 2) {
        v.push_back(s[i] - '0'); 
    }

    sort(v.begin(), v.end());

    string res = "";
    for (int i = 0; i < v.size(); i++) {
        res += to_string(v[i]);
        if (i < v.size() - 1) {
            res += "+";
        }
    }

    cout << res << endl;

    return 0;
}