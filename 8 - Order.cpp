#include <iostream>

int main(){
    int x;
    std::cout << "Enter X";
    std::cin >> x;
    for(int i = x + 1; i < x + 10; i++)
        std::cout << i << '\n';
    return 0;
}