#include <iostream>
#include <string>
using namespace std;

int main() {
	int prices[3][4];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> prices[i][j];
		}
	}
	int bTab[4][2];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> bTab[i][j];
		}
	}
	int res[3][2];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			res[i][j] = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 4; k++) {
				res[i][j] += prices[i][k] * bTab[k][j];
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << res[i][j] << " ";
		}
		cout << '\n';
	}
	int max_pr = 0;
	int min_pr = 0;
	int max_prof = 0;
	int min_prof = 0;
	float sum_pr = 0;
	float sum_prof = 0;
	for (int i = 0; i < 6; i++) {
		sum_pr += res[i][0];
		sum_prof += res[i][1];

		if (res[max_pr][0] < res[i][0])
			max_pr = i;

		if (res[min_pr][0] > res[i][0])
			min_pr = i;

		if (res[max_prof][0] < res[i][1])
			max_prof = i;

		if (res[min_prof][0] > res[i][1])
			min_prof = i;
	}

	cout  << "\nSeller " << max_pr + 1 << " made Max Money\n" 
		<< "Seller " << min_pr + 1 << "Made min money \n\n";

	cout << "Commission: \nMax by " << max_prof + 1 << "seller \n Min by " 
		<< min_prof + 1 << " Seller\n\n";

	cout << "Summs: " << sum_pr << "\n" << sum_prof;
	return 0;
}
