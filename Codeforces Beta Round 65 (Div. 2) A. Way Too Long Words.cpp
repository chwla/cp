#include <iostream>
#include <string>
using namespace std;

string waytoolongwords(string w){
    int n = w.size();
    if(n > 10){
        string t = w.substr(0, 1) + to_string(n - 2) + w.substr(n - 1, 1);
        return t;
    }
    else{
        return w;
    }
}

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;
        
        cout << waytoolongwords(word) << endl;
    }
    
    return 0;
}