#include <iostream>

using namespace std;

int main(){
    float a;
    for(int i = -4; i <= +4; i += 0.5){
        if(i != 1)
            cout << "x = " << i << "\n y = " << (i*i - 2 * i + 2)/(i - 1) << '\n';
        else
            cout << "No y for x = 1";
    }

    return 0;
}