#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n, x;
    cin>>n>>x;
    if(n == 1 || n==2) return 1;
    n -= 2;
    int floor = 1 + (n - 1) / x + 1;
    return floor;   
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}