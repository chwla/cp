#include <iostream>
#include<vector>
using namespace std;

int main(){
    int c;
    cin>>c;
    while(c--){
        int n,m;
        cin>>n>>m;
        vector<string>v(n);
        for(int i = 0; i < n; i++){
            cin>>v[i];
        }
        int res = 0;
        for(int j = 0; j < m; j++){
            if(v[n-1][j]=='D') res++;
        }

        for(int j = 0; j < n; j++){
            if(v[j][m-1]=='R') res++;
        }

        cout<< res <<endl;
    }
    return 0;
}