#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    string input;
    cout << "Enter Letters(ENG Capital only)\n";
    int letters[26];
    for(int i = 0; i < 26; i++)
        letters[i] = 0;
    cin >> input;
    for(int i = 0; input[i] != '\0'; i++) {
        letters[input[i] - 65]++;
    }

    for(int i = 0; i < 26; i++) {
        for(int j = 0; j < letters[i]; j++)
            cout << char(i + 65);
    }
    return 0;
}