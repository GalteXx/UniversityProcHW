#include <iostream>


using namespace std;

int euclid(int a, int b) {
    if (a == b)
        return a;

    return (a > b) ? euclid(a - b, b) : euclid(a, b - a);
}

int euclid2(int a, int b) {
    if (a == 0 || b == 0)
        return a + b;

    return (a > b) ? euclid2(a % b, b) : euclid2(a, b % a);
}

int main() {
    int a, b;
    cout << "Enter 2 numbers:\n";
    cin >> a >> b;
    if (a == 0 || b == 0) {
        cout << "0 is invalid\n";
        return 0;
    }

    cout << "GCD by extraction: " << euclid(a, b) << '\n';
    cout << "GCD by division: " << euclid2(a, b) << '\n';

}