#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int maxx(vector<int> vec){
    int maxi = -1;
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] > maxi)
            maxi = vec[i];
    }
    return maxi;
}

int main(){
    string file_path;
    cin >> file_path;
    ifstream file(file_path);

    if(!file.is_open()){
        cout << "File couldnt be reached";
        return 0;
    }
    char a;
    vector<int> Symbols_amount(0, 255);
    while(file >> a){
        Symbols_amount[a]++;
    }
    cout << maxx(Symbols_amount);

}