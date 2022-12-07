#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
using namespace std;

string remBackZeros(string a){
    while(true){
        if(a[a.size() - 1] != '0')
            return a;
        a.erase(a.size()-1);
    }
}

double func(double y, double x, double k){
    string strY = to_string(y - (int)y);
    //cout << remBackZeros(strY);
    if(remBackZeros(strY).size() - 2 >= 6){
        cout << "returning \n";
        return y;
    }
    return y + func( tgamma(k + 3) / ((k + 1)*(k + 1)*pow(x, 4*k) ), x, k + 1);

}

int main(){
    int x;
    cin >> x;
    cout.precision(17);
    cout << func(0, x, 0);

    return 0;
}