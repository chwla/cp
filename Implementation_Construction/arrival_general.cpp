#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> heights(n);

    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    int max_pos = max_element(heights.begin(), heights.end()) - heights.begin();
    int min_pos = min_element(heights.rbegin(), heights.rend()) - heights.rbegin();
    min_pos = n - 1 - min_pos;  // Correct the position for reverse iterator

    int swaps = max_pos + (n - 1 - min_pos);
    if (max_pos > min_pos) {
        swaps--;
    }

    cout << swaps << endl;

    return 0;
}