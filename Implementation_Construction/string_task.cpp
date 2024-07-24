#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

bool isVowel(char c) {
    char lowerC = tolower(c);
    return lowerC == 'a' || lowerC == 'o' || lowerC == 'y' || lowerC == 'e' || lowerC == 'u' || lowerC == 'i';
}

int main() {
    string input;
    cin >> input;
    
    string result = "";
    
    for (char c : input) {
        if (!isVowel(c)) {
            result += '.';
            result += tolower(c);
        }
    }
    
    cout << result << endl;
    
    return 0;
}
