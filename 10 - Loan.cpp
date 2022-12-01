#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float S, p, n;
    cout << "Enter S, p, n";
    cin >> S >> p >> n;
    if(12 * (pow(1 + (p / 100), n) - 1) == 0){
        cout << "Something went wrong";
        return 0;
    }
    if(p != 0)
        cout << (S * (p/100) * pow(1 + (p/100), n)) / (12 * (pow(1 + (p / 100), n) - 1));
    else
        cout << S / p;
        


    return 0;
}
