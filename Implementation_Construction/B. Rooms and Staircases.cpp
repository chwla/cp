#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int n;   
    cin >> n;
    string s;    
    cin >> s;

    int max_rooms = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            count++;  
        }
        count++; 
    }
    max_rooms = max(max_rooms, count); 
    count = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '1') {
            count++;  
        }
        count++;  
    }
    max_rooms = max(max_rooms, count);  
    count = 0;

    int left = n, right = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            left = min(left, i);
            right = max(right, i);
        }
    }

    if (right != -1) {
        right++;
        max_rooms = max({max_rooms, 2 * right, 2 * (n - left)});
    }

    cout << max_rooms << endl;
}

int main() {
    int t;  
    cin >> t;
    while (t--) {
        solve(); 
    }
    return 0;
}
