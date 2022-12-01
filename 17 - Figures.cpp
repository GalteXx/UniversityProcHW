#include <iostream>

using namespace std;

void triangle() {
	cout << "\nEnter h and a";
	float a, h;
	cin >> h >> a;
	cout << "S = " << h * a / 2;

}

void rectangle() {
	cout << "\nEnter a and b";
	int a, b;
	cin >> a >> b;
	cout << a * b;
}

void circle() {
	cout << "\nEnter radius";
	float R;
	cout << R * R * 3.14;
}

int main() {
	char a;
	cout << "Enter figure:\nT - triangle\nC - circle\nR - Rectangle";
	cin >> a;
	switch (a)
	{
		case 'T':
			triangle();
			break;
		case 'C':
			circle();
			break;
		case 'R':
			rectangle();
			break;
		default:
			cout << "error";
			return 0;
	}
	return 0;
}
