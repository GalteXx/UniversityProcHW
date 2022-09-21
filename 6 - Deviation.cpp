#include <iostream>
#include <cmath>

using namespace std;


int main(){
    float a, x;
	cout << "enter a\n";
	cin >> a;
	cout << "enter x\n";
	if(abs(x) < 1)
		cout << a * log(x);
	else {
		cout << sqrt(abs(a - x*x));
		if(a - x*x < 0)
			cout << 'i';

	}
		
    return 0;
}