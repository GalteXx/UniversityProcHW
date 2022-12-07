#include <iostream>

using namespace std;

int main() {
	
	for (int j = 0; j < 13; j++) {
		for (int i = 0; i < 60; i++) {
			if (i <= 15 && j < 7) {
				if (i % 2 == 0)
					cout << "*";
				else
					cout << "_";
			}
			else if (j % 2 == 0)
				cout << "#";
			else
				cout << "0";
		}
		cout << '\n';
	}
	return 0;
}
