#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n, m;
    cin>>n>>m;
    int lanterns = (n*m+1)/2;
    return lanterns;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}