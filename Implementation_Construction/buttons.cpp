#include<iostream>
#include <cmath>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int res =(n - 1) * n * (n + 1) / 6 + n;
    cout<<res<<endl;
}