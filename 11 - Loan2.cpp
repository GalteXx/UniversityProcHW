#include<iostream>
#include <cmath>

using namespace std;
//Считаем, подойдут ли значения (непосредвенно подсавляем в формулу, и говорим сколько)
float enough(float S, float r, float n) {
    if (r > 0) {
        return (S * r * pow(1 + r, n)) /
               (12 * (pow(1 + r, n) - 1));
    } else {
        return S * r / 12;
    }
}
int main() {
    float m, S, n;
    cout << "Enter m, s and n\n";
    cin >> m >> S >> n;


    if (m <= 0 || S <= 0 || n < 1) {
        cout << "Nope";
    }
    //Обычный бинарный поиск, ничего сверхъестественного
    float left = 0;
    float right = 300;

    while (abs(right - left) > 0.00001) { //неприятная компенсация опшипки float
        if (enough(S, (left + right) / 2, n) < m) {
            left = (left + right) / 2;
        } else {
            right = (left + right) / 2;
        }
    }
    //выводим ответ (да ну?)
    cout << left << endl;
}