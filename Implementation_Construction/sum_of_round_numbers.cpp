#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> decomposeIntoRoundNumbers(int n) {
    vector<int> round_numbers;
    int place = 1;
    
    while (n > 0) {
        int last_digit = n % 10;
        if (last_digit != 0) {
            round_numbers.push_back(last_digit * place);
        }
        n /= 10;
        place *= 10;
    }
    
    return round_numbers;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> round_numbers = decomposeIntoRoundNumbers(n);
        
        cout << round_numbers.size() << endl; 
        for (int i = 0; i < round_numbers.size(); ++i) {
            cout << round_numbers[i] << " "; 
        }
        cout << endl;
    }
    
    return 0;
}