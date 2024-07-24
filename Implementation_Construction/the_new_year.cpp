#include <iostream>
#include <math.h>
#include <algorithm> 
using namespace std;

int main(){
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int points[3] = {x1, x2, x3};
    sort(points, points+3);
    int dist = points[2] - points[0];
    cout << dist << endl;
    return 0;
}