#include <iostream>

using namespace std;

int main()
{
    double S, m, n, p = 1;
    cout << "Enter S, m, n\n";
    cin >> S >> m >> n;
    while ((S * (p / 100) * pow(1 + p / 100, n)) / (12 * (pow(1 + p / 100, n) - 1)) < m) 
        p += 0.1;
    cout << p;
    return 0;
}
