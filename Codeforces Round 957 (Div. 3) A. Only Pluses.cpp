#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        int maxi = 0;
        for (int i = 0; i <= 5; ++i) {
            for (int j = 0; j <= 5 - i; ++j) { 
                int k = 5 - i - j; 
                
                int new_a = a + i;
                int new_b = b + j;
                int new_c = c + k;
                int product = new_a* new_b*new_c;
                maxi = max(maxi, product);
            }
        }
        
        cout << maxi<< endl;
    }
    
    return 0;
}
