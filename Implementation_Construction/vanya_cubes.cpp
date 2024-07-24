#include <iostream>
using namespace std;

int main(){
    int pyramid;
    cin>>pyramid;
    int height = 0;
    int pyramid_val = 0;
    while(pyramid>pyramid_val){
        height++;
        pyramid_val += (height*(height+1))/2;
        
        if (pyramid_val > pyramid) {
            height--;
            break;
        }
    }
    cout<<height<<endl;
}