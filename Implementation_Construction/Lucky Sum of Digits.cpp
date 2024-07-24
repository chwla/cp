#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int seven = n / 7;
    
    while (seven >= 0) {
        int sum = n - seven * 7;
        
        if (sum % 4 == 0) {
            int four = sum / 4;
            string res = string(four, '4') + string(seven, '7');
            cout << res << endl;
            return 0;
        }
        
        seven--;
    }
    
    cout << -1 << endl;
    return 0;
}