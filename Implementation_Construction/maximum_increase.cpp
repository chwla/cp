#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        int a;
        cin>>a;
        arr[i] = a;
    }
    int count = 1;
    int maxi = 1;
    for(int j = 1; j<n; j++){
        if(arr[j] > arr[j-1]){
            count++;
            maxi = max(maxi, count);
        }
        else{
            count = 1;
        }
    }
    cout<<maxi<<endl;

    return 0;
}
