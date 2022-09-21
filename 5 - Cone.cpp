#include<iostream>
#include<cmath>

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

int main(){
    //getting all values
    float r, R, h, l;
    cout << "Enter radius of cut plane\n";
    CorrectedFloatInput(r);
    cout << "Enter radius of original plane\n";
    CorrectedFloatInput(R);
    cout << "enter cone height\n";
    CorrectedFloatInput(h);
    cout << "Enter lenth of the side\n";
    CorrectedFloatInput(l);

    //claclulating using formulas
    cout << "V = " << 1/3 * 3.14 * h * (R*R + R*r + r*r) << '\n';
    cout << "S = " << 3.14 * (R*R + (R + r)*l + r*r) << '\n';
 
    return 0;
}