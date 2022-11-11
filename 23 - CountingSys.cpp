#include <iostream>
#include <string>

using namespace std;



int main() {
	int ss;
	string num;
	const string alp = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout << "Enter counting sys Power:\n";
	cin >> ss;
	if(ss > 36 || ss < 0) {
		cout << "wrong power";
		return 0;
	}
		
	cout << "Enter number:\n";
	cin >> num;
	for(int i = 0; num[i] != '\0\; i++) {
	    if(num[i] > alph[i]) {
		    cout << "wrong number";
		    return 0;
	    }
	}
	    

	long long dec = 0;
	for (int i = 0; num[i] != '\0'; i++) {
		dec += pow(ss, num.size() - 1 - i) * (alp.find(num[i]));
	}
	cout << "Enter target sys Power:\n";
	cin >> ss;
	if(ss > 36 || ss < 0) {
		cout << "wrong power";
		return 0;
	}
	num = "";
	while (dec > 0) {
		num += alp[dec % ss];
		dec /= ss;
	}
	
	for (int i = 0; i < num.size()/2; i++) {
		char tmp;
		tmp = num[i];
		num[i] = num[num.size() - 1 - i];
		num[num.size() -1 - i] = tmp;
	}

	cout << num;
	return 0;
}
