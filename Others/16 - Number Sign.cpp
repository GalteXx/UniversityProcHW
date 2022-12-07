#include <iostream>

using namespace std;

int chs(int a) {
	if (a > 0)
		return 1;
	else if (a == 0)
		return 0;

	return -1;
}

int main() {
	int a;
	cout << "Enter num\n";
	cin >> a;
	cout << chs(a);

	return 0;
}
