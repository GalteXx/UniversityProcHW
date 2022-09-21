#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ifstream fl("file.txt");
    string a;
    while(getline(fl, a)){
        cout << a;
    }
    return 0;
}