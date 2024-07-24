#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int count;
    cin >> count;
    
    while(count--) {
        int c, d;
        cin >> c >> d;
        
        vector<vector<int>> a(c, vector<int>(d));
        for (int i = 0; i < c; ++i)
            for (int j = 0; j < d; ++j)
                cin >> a[i][j];
        
        if (c == 1 && d == 1) {
            cout << "-1" << endl;
            continue;
        }
        
        vector<vector<int>> b(c, vector<int>(d));
        
        vector<int> temp;
        for (int i = 0; i < c; ++i)
            for (int j = 0; j < d; ++j)
                temp.push_back(a[i][j]);
        
        rotate(temp.begin(), temp.begin() + 1, temp.end());
        
        int k = 0;
        for (int i = 0; i < c; ++i)
            for (int j = 0; j < d; ++j)
                b[i][j] = temp[k++];
        
        bool aaa = true;
        for (int i = 0; i < c && aaa; ++i)
            for (int j = 0; j < d; ++j)
                if (a[i][j] == b[i][j]) {
                    aaa = false;
                    break;
                }
        
        if (!aaa) {
            do {
                random_shuffle(temp.begin(), temp.end());
                k = 0;
                for (int i = 0; i < c; ++i)
                    for (int j = 0; j < d; ++j)
                        b[i][j] = temp[k++];
                
                aaa = true;
                for (int i = 0; i < c && aaa; ++i)
                    for (int j = 0; j < d; ++j)
                        if (a[i][j] == b[i][j]) {
                            aaa = false;
                            break;
                        }
            } while (!aaa);
        }

        for (int i = 0; i < c; ++i) {
            for (int j = 0; j < d; ++j) {
                if (j > 0) cout << " ";
                cout << b[i][j];
            }
            cout << endl;
        }
    }
    
    return 0;
}
