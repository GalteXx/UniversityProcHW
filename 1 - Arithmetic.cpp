#include <iostream>

using namespace std;

int main() {
	system("chcp 1251");
	float a, b;
	char action;
	cout << "Введите 1 число\n";
	cin >> a;
	cout << "Введите 2 число\n";
	cin >> b;
	cout << "Введите десйствие\n";
	cin >> action;
	//Проводим действие, запрошенное пользователем
	//но в с++ не завезли SitchCase для строк и char'ов
	if (action == '+')
		cout << a + b;
	else if (action == '-')
		cout << a - b;
	else if (action == '*')
		cout << a * b;
	else if (action == '/' && b != 0)
		cout << a / b;
	else if (action == '/' && b == 0)
		cout << "На 0 делить нельзя";
	else
		cout << "Не распознанно действиее";
	return 0;
}
