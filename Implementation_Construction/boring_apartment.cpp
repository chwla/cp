#include <iostream>
using namespace std;

int main() {
    int count;
    cin >> count;
    
    while (count--) {
        string s;
        cin >> s;
        
        int digit = s[0] - '0';
        int length = s.length();
        
        int keypress = 0;

        for (int i = 1; i < digit; ++i) {
            keypress += 1 + 2 + 3 + 4;
        }

        for (int j = 1; j <= length; ++j) {
            keypress += j;
        }
        
        cout << keypress << endl;
    }
    
    return 0;
}