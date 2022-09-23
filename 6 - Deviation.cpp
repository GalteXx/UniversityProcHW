#include <iostream>
#include <cmath>

using namespace std;


int main(){
    float a, x;
	cout << "enter a\n";
	cin >> a;
	cout << "enter x\n";
	if(a != int(a)) {
		cout << "NO";
		rerturn 0;
	}
	if(abs(x) < 1)
		cout << a * log(x);
	else {
		
		if(a - x*x < 0){
			cout << "NO";
			return 0;
		}
		
		cout << sqrt(abs(a - x*x));

	}
		
    return 0;
}
