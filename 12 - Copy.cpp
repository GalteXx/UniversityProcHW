#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ifstream fl("file.txt");
    string a;
    if(!fl.is_open()){
        cout << "error";
        return 0;
    }
    while(getline(fl, a)){
        cout << a;
    }
    return 0;
}
