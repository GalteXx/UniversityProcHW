#include <iostream>
using namespace std;


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
			//я могу использовать его для "пропуска" мешающегося символа(-)
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


int nz(int a){
	if( a == 0)
		return a*(-1);
	return a;
}

int main() {
	float a, b;
	//получаем числа
	cout << "Enter coefficient b\n";
	cin >> a;
	cout << "Enter coefficient c\n";
	cin >> b;
	//обрабатываем особые случаи
	if (a == 0 && b == 0)
		cout << "x can be any number";
	else if (a == 0 && b != 0)
		cout << "x does not exist on R";
	else
		cout << "x = " << nz(-1*b / a);
	return 0;
}
