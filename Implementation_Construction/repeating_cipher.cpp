#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    string res = "";
    int index = 0;
    for (int i = 1; index < n; ++i) {
        res += s[index];
        index += i;
    }
    
    cout << res << endl;
    return 0;
}
