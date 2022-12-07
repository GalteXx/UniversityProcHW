#include <string>
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

void quickSort(vector<string> &strvec, int left, int right) {
	int i = left, j = right;
	string mid = strvec[(left + right) / 2];

	while (i <= j) {
		while (strvec[i] < mid)
			i++;
		while (strvec[j] > mid)
			j--;
		if (i <= j) {
			swap(strvec[i], strvec[j]);
			i++; j--;
		}
	};
	if (left < j)
		quickSort(strvec, left, j);
	if (i < right)
		quickSort(strvec, i, right);
}


int main(){
    string file_path;
    cin >> file_path;
    ifstream file(file_path);

    if(!file.is_open()){
        cout << "File couldnt be reached";
        return 0;
    }
    vector<string> parsed_string;
    string a;
    while(file >> a){
        parsed_string.push_back(a);
    }


    quickSort(parsed_string, 0, parsed_string.size() - 1);
    
    for(auto e: parsed_string)
        cout << e << " ";
    return 0;
}