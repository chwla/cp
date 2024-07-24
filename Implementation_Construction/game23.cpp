#include <iostream>
#include <cmath>
using namespace std;

int game23(){
    int n, m;
    cin>>n>>m;
    if (m % n != 0) {
        return -1;
    }
    int goal = m/n;
    if(goal == 1){
        return 0;    
    }
    else if (goal <= 0){
        return -1;
    }
    int count = 0;
    while(goal > 1){
        if(goal % 3 == 0){
            goal /= 3;
            count++;
        }
        else if(goal % 2 == 0){
            goal /= 2;
            count++;
        }
        else{
            return -1;
        }
    }
    if (goal != 1) {
        return -1;
    }
    return count;
}

int main(){
    cout<< game23() << endl; 
    return 0;
}