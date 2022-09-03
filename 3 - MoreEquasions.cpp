
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int args[3];
	system("chcp 1251");
	//читаем параметры, используя св-ва ASCII
	for (int i = 65; i < 68; i++) {
		cout << "Введите " << char(i) << '\n';
		cin >> args[i - 65];
	}
	//решаем
	cout << -1 * args[1] + sqrt(args[1] * args[1] - 4 * args[0] * args[2]) << '\n';
	cout << -1 * args[1] - sqrt(args[1] * args[1] - 4 * args[0] * args[2]);
	
	return 0;
}
