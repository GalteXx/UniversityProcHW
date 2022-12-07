#include <iostream>

using namespace std;

int main(){
TODINPUT:
    cout << "Enter the time of the day (Day, Night)\n";
    string input;
    cin >> input;
    if(input != "Day" && input != "Night"){
        cout << "only Day or Night are supported";
        goto TODINPUT;
    }
    bool isDay = input == "Day";
CURTAINSINPUT:
    cout << "Are curtains open? (y/n)\n";
    cin >> input;
    if(input != "y" && input != "n") {
        cout << "type y or n\n";
        goto CURTAINSINPUT;
    }
    bool curStat = input == "y";
LAMPINPUT:
    cout << "Is lamp on? (y/n)\n";
    cin >> input;
    if(input != "y" && input != "n") {
        cout << "type y or n\n";
        goto LAMPINPUT;
    }
    bool lampInput = input == "y";
    if(lampInput || (curStat && isDay))
        cout << "It's bright inside";
    else
        cout << "It's dark inside";

    return 0;
}