#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<string> grid(n, string(m, '.'));
    
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            grid[i] = string(m, '#');
        } 
        else if (i % 4 == 1) {
            grid[i][m - 1] = '#';
        } 
        else if (i % 4 == 3) {
            grid[i][0] = '#';
        }
    }
    
    for (int i = 0; i < n; ++i) {
        cout << grid[i] << endl;
    }
    
    return 0;
}