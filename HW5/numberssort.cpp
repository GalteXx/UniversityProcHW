#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

#include <string>
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

void quickSort(vector<double> &vec, int left, int right) {
	int i = left, j = right;
	double mid = vec[(left + right) / 2] - (int)vec[(left + right) / 2];
	cout << mid << endl;
	while (i <= j) {
		while (vec[i] - (int)vec[i] < mid)
			i++;
		while (vec[j] - (int)vec[j] > mid)
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
    ofstream file("C:/Users/Maxim/Documents/Arch/Coding/UniversityProcRepo/HW5/text.txt");
    ofstream sorted_file("C:/Users/Maxim/Documents/Arch/Coding/UniversityProcRepo/HW5/sorted-text.txt");
    vector<double> vec;
	if(!file.is_open() || !sorted_file.is_open())
		return 0;
    cout << "Enter amount of numbers:";
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        double tmp;
        cin >> tmp;
        vec.push_back(tmp);
        file << tmp << '\n';
    }
	
	cout << "Done";
	quickSort(vec, 0, vec.size() - 1);
	cout << "Done";
	for(auto vr : vec){
		sorted_file << vr << '\n';
	}
	
	return 0;
}