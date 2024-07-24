#include<iostream>
#include<vector>
using namespace std;

int book(){
    int pages;
    cin>>pages;
    int n = 7, i = 0;
    vector<int> v(7);
    for (int i = 0; i < 7; ++i) {
        cin >> v[i];
    }
    while(pages > 0){
        pages -= v[i];
        if (pages <= 0) break; 
        i = (i + 1) % 7;       
    }
    return i+1;
}

int main(){
    cout<< book() <<endl;
    return 0;
}