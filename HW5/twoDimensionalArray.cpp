#include <iostream>
#include <vector>
using namespace std;


double avg(vector <double> vec){
    double res = 0;
    for(int element : vec){
        res += element;
    }
    return res / vec.size();
}

void quickSort(vector<vector<double>> &vec, int left, int right) {
	int i = left, j = right;
	double mid = vec[(left + right) / 2][0];

	while (i <= j) {
		while (vec[i][0] < mid)
			i++;
		while (vec[j][0] > mid)
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
    int height, lenght;
    cout << "Enter array's height and length:\n";
    cin >> height >> lenght;
    vector<vector<double>> vec(height, vector<double>(lenght, 0));

    for(int i = 0; i < vec.size(); i++)
        for(int j = 0; j < vec[i].size(); j++){
            cin >> vec[i][j];
    }

    cout << '\n';
    for(int i = 0; i < vec.size(); i++){
        vec[i].insert(vec[i].begin(), avg(vec[i])); 
    }   
    quickSort(vec, 0, vec.size() - 1);

    for(int i = 0; i < vec.size(); i++)
        vec[i].erase(vec[i].begin());

    for(auto subvec : vec){
        for(auto vecel : subvec)
            cout << vecel << " ";
        cout << '\n';  
    }
        
    return 0;
}