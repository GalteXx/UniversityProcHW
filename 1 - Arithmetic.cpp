#include <iostream>
#include <cmath>
using namespace std;

//Проверка на правильность типа
void CorrectedFloatInput(float &a){
	//чтение текска, и проверка символов, на "правильность"
	while(true) {
		bool incorrect = false;
		string input;
		cin >> input;
		for(int i = 0; input[i] != '\0'; i++) {
			if((input[i] < 48 || input[i] > 57) && input[i] != '.' && 
			  (input[i] != '-' && i == 0)) {
				incorrect = true;
				cout << "This is not a type requested\n";
				break;
			}
		}
		//переведение из строки во float
		if(!incorrect) {
			bool hasDot = false;
			int divIncr = 1;
			//так как в С++ bool это работает как int без явного приведения типов
			//я могу использовать его для "пропуска" мешающегося символа
			for(int i = (input[0] == '-'); input[i] != '\0'; i++) {
				if(input[i] != '.') {
					a += (input[i] - 48);
					a *= 10;
				}
				else {
					hasDot = true;
                    divIncr = 0;
				}
				if(hasDot)
					divIncr++;	
			}
			a /= pow(10, divIncr);
			//я не смог придумать способ без разветвления
			//я уверен, как-то можно значный бит заменить 
			if(input[0] == '-')
				a *= -1;
			return;
		}
	}
}

int main() {

	float a, b;
	char action;
	cout << "Enter first number\n";
	CorrectedFloatInput(a);
	cout << "Enter second number\n";
	CorrectedFloatInput(b);
//Использую GOTO, потому что тут он выглядит наиболее логичным
//можно, конечно через while(true)
//Держим пользователя, пока тот не введет нужный символ операции;
ACTIONINPUT:
	cout << "Enter action\n";
	cin >> action;
	//Проводим действие, запрошенное пользователем
	//но в с++ не завезли Switch Case для строк и char'ов
	if (action == '+')
		cout << a + b;
	else if (action == '-')
		cout << a - b;
	else if (action == '*')
		cout << a * b;
	else if (action == '/' && b != 0)
		cout << a / b;
	else if (action == '/' && b == 0)
		cout << "Division by 0 is impossible";
	else{
		cout << "Only +, -, *, / are supported\n";
		//сбрасываем ввод пользователя, на случай если он написал несколько символов
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		goto ACTIONINPUT;
	}
		
	return 0;
}
