#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, x,y,z;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        if(x > y)swap(x,y);
        if(x > z)swap(x,z);
        if(y > z)swap(y,z);
        if(y == z){
            cout<<"YES\n";
            cout<<x<<" "<<x<<" "<<z<<endl;
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
