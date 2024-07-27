#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;

        if(2*a <= b){
            cout<<a<< " "<<a*2<<endl;
        }
        else{
            cout<<-1<<" "<<-1<<endl;
        }
    }
    return 0;
}