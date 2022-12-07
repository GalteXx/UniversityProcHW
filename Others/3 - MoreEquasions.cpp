
#include <iostream>
#include <cmath>
using namespace std;

int nz(int a){
	if( a == 0)
		return a*(-1);
	return a;
}

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
	float args[3];
	system("chcp 1251");
	//читаем параметры, используя св-ва ASCII
	for (int i = 0; i < 3; i++) {
		cout << "Enter coeffcient " << char(i + 65) << '\n';
		CorrectedFloatInput(args[i]);
	}
	cout << args[0] << "x^2 + " << args[1] << "x + " << args[2] << " = 0\n";
	//решаем
	if(args[0] != 0 && args[1] != 0 && args[2] != 0){
		cout << "x = " << -1 * args[1] + sqrt(args[1] * args[1] - 4 * args[0] * args[2]) 
			 << "\nx = " << -1 * args[1] - sqrt(args[1] * args[1] - 4 * args[0] * args[2]);
	}
	else if(args[0] == 0 && args[1] == 0) {
		if(args[2] == 0)
			cout << "x can be any number";
		else
			cout << "x does not exist on R";
	}
	else if(args[0] != 0 && args[1] == 0){
		cout << sqrt(-1*args[2]/args[0]);
	}
	else if(args[0] == 0 && args[1] != 0){
		cout << nz(-1 * args[3] / args[1]);
	}
	
	
	return 0;
}
