#include <iostream>
#include <string>

using namespace std;



int main() {
	int ss;
	string num;
	const string alp = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout << "Enter counting sys Power:\n";
	cin >> ss;
	cout << "Enter number:\n";
	cin >> num;

	long long dec = 0;
	for (int i = 0; num[i] != '\0'; i++) {
		dec += pow(ss, num.size() - 1 - i) * (alp.find(num[i]));
	}
	cout << "Enter target sys Power:\n";
	cin >> ss;
	num = "";
	while (dec > 0) {
		num += alp[dec % ss];
		dec /= ss;
	}
	
	for (int i = 0; i < num.size()/2; i++) {
		char tmp;
		tmp = num[i];
		num[i] = num[num.size() - 1 - i];
		num[num.size() -1 - i] = tmp;
	}

	cout << num;
	return 0;
}
