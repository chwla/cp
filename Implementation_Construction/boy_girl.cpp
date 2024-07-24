#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    string name;
    cin >> name;
    set<char> distinctLetters;

    for(char s: name){
        distinctLetters.insert(s);
    }

    if(distinctLetters.size() % 2 == 0){
        cout<< "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}