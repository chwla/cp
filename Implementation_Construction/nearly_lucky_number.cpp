#include <iostream>
#include <string>
using namespace std;

string luckyNumber(){
    string n;
    cin>>n;
    int count = 0;
    for(char c : n){
        if(c == '4' || c == '7'){
            count++;
        }
    }
    string countStr = to_string(count);
    for (char c : countStr) {
        if (c != '4' && c != '7') {
            return "NO";
        }
    }

    return "YES";
}


int main(){
    cout<<luckyNumber()<<endl;
    return 0;
}