#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int capacity = INT_MIN;
    int current = 0;
    while(n--){
        int a,b;
        cin>>a>>b;
        current = current+b-a;
        if(current > capacity){
            capacity = current;
        }
    }
    cout<<capacity<<endl;
    return 0;
}