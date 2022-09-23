#include<iostream>
#include<cmath>

using namespace std;


int main() {
	//getting all values
	float r, R, h, l;
	cout << "Enter radius of cut plane\n";
	cin >> r;
	cout << "Enter radius of original plane\n";
	cin >> R;
	cout << "enter cone height\n";
	cin >> h;
	if (h <= 0 || R <= 0 || r < 0) {
		cout << "Something went wrong";
		return 0;
	}
	l = sqrt((R - r) * (R - r) + h * h);

	//claclulating using formulas
	cout << "V = " << (1.0 / 3) * 3.14 * h * (R * R + R * r + r * r) << '\n';
	cout << "S = " << 3.14 * (R * R + (R + r) * l + r * r) << '\n';

	return 0;
}
