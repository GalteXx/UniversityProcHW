#include <iostream>
using namespace std;

int main() {
	float a, b;
	system("chcp 1251");
	//получаем числа
	cout << "Введите коэффициет b\n";
	cin >> a;
	cout << "Ввдеите коэффициент c\n";
	cin >> b;
	//обрабатываем особые случаи
	if (a == 0 && b == 0)
		cout << "x любое число";
	else if (a == 0 && b != 0)
		cout << "x не принадлежит R";
	else
		cout << "x = " << -1*b / a;
	return 0;
}
