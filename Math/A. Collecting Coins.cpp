#include <bits/stdc++.h>
using namespace std;

bool solve() {
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    int max_val = max({a, b, c});
    int required_operations = (max_val - a) + (max_val - b) + (max_val - c);
    int remaining_operations = n - required_operations;
    if (remaining_operations >= 0 && remaining_operations % 3 == 0) {
        return true;
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        if(solve()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}