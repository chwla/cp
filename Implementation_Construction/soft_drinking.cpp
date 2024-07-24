#include <iostream>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drinks = (k*l)/(n*nl);
    int lime = (c*d)/n;
    int salt = p/(n*np);
    int res = min(drinks, min(lime, salt));
    cout<<res<<endl;
    return 0;
}