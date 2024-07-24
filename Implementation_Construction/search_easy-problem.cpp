#include <iostream>
using namespace std;

string problem_difficulty(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        if(a == 1){
            return "HARD";
        }
        else{
            continue;
        }
    }
    return "EASY";
    
}

int main(){
    cout<<problem_difficulty()<<endl;
    
    return 0;
}