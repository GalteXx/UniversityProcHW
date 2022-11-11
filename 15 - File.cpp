#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main(){
    ofstream ofile("text.txt");
    ofile << 1 << " " 2 << " " << 4 << " " << 5 << " " << 6 << " " << 7 << " " << 8 << " " << 9 << " " << 0;
    ofile.close();
    ifstream file;
    string str;
    if(!file.is_open()) {
        cout << "error";
        return 0;
    }
    int n, sum = 0;
    while(ifstream >> n){
        sum += n;
    }
    
    cout << sum;
}
