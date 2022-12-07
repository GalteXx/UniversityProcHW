#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ifstream fl("file.txt");
    string a;
    while(getline(fl, a)){
        for(int i = 0; a[i] != '\0'; i++)
            if(a[i] >= 48 && a[i] <= 57)
                cout << a[i];
    }
    return 0;
}