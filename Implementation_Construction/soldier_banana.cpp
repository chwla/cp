#include <iostream>
using namespace std;

int main(){
    int cost, dollars, banana;
    cin>>cost>>dollars>>banana;

    int total_cost = cost * banana * (banana + 1) / 2;
    if(total_cost == dollars || dollars > total_cost){
        cout<<0<<endl;
    }
    else{
        cout<<(total_cost-dollars)<<endl;
    }   
    return 0;
}