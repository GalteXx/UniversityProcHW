#include <iostream>
#include <fstream>

using namespace std;

int main(){
    cout << "Enter file path:\n";
    string path;
    cin >> path;
    ifstream file(path);
    if(!file.is_open()){
        cout << "Failed to open file";
        return 0;
    }
    
    char n;
    while(file >> n){
        cout << int(n);
    }
}