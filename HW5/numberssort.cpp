#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;


int sum(double num){
	int res = 0;
	ostringstream strs;
	strs << setprecision(16)  << num;
	string str = strs.str();
	for(int i = str.find('.'); i < str.size(); i++){
		res += (str[i] - 48);
	}
	return res;
}

void quickSort(vector<double> &vec, int left, int right) {
	int i = left, j = right;
	double mid = sum(vec[(left + right) / 2]);
	while (i <= j) {
		while (sum(vec[i]) < mid)
			i++;
		while (sum(vec[j]) - (int)vec[j] > mid)
			j--;
		if (i <= j) {
			swap(vec[i], vec[j]);
			i++; j--;
		}
	};
	if (left < j)
		quickSort(vec, left, j);
	if (i < right)
		quickSort(vec, i, right);
}


int main(){
	string filePath;
	cout << "Enter File Paht\n";
	cin >> filePath;
    ifstream file(filePath);
    ofstream sorted_file(filePath+"-sorted.txt");
	if(!file.is_open() || !sorted_file.is_open()){
		cout << "Failed to open file";
		return 0;
	}
    vector<double> vec;
	if(!file.is_open() || !sorted_file.is_open())
		return 0;
	double n;
	while(file >> setprecision(16) >> n){
		vec.push_back(n);
	}
	
	cout << "Done";
	quickSort(vec, 0, vec.size() - 1);
	cout << "Done";
	for(auto vr : vec){
		sorted_file << vr << '\n';
	}
	
	return 0;
}