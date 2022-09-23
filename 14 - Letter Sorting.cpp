#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void quickSort(std::string& str, int left, int right) {
	int i = left, j = right;
	int mid = str[(left + right) / 2];

	while (i <= j) {
		while (str[i] < mid)
			i++;
		while (str[j] > mid)
			j--;
		if (i <= j) {
			std::swap(str[i], str[j]);
			i++; j--;
		}
	};
	if (left < j)
		quickSort(str, left, j);
	if (i < right)
		quickSort(str, i, right);
}

int main(){
    string input;
    cout << "Enter Letters(ENG Capital only)\n";

    cin >> input;
    quickSort(input, 0, input.size()-1);
    return 0;
}
