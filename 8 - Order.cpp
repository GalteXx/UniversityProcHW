#include <iostream>

int main(){
    float x;
    std::cout << "Enter X";
    std::cin >> x;
    if(x <= 0 || x != int(x)) {
        cout << "NO";
        return 0;
    }
    for(int i = x + 1; i < x + 10; i++)
        std::cout << i << '\n';
    return 0;
}
