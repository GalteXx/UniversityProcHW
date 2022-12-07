#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float x, y, b;
L:
    cout << "Enter x, y, b";
    cin >> x >> y >> b;
    if(x > b || y >= b)
        goto L;
    cout << log(b-y)*sqrt(b-x);
}