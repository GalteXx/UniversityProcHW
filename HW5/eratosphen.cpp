#include <iostream>
#include <vector>

using namespace std;

void func(int n){
    vector<bool> check(n+1, true);
    for (int i = 2; i <= n; ++i) {
        int j = 2;
        while ((j != n) && (j * i <=n)) {
            check[j * i] = false;
            j++;
        }
    }
    for (int i = 2; i < check.size(); ++i) {
        if (check[i])
            cout << i << " ";
    }
}
int main() {
    int n;
    cout << "Enter a number\n";
    cin >> n;
    if (n < 0) {
        cout << "Must be positive. Greater than 2";
        return 0;
    }
    cout << "All simple numbers from 2 \n" << n << ":\n";

        func(n);
    
}