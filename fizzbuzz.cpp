#include <iostream>

int main() {
    for(int i = 1; i < 101; ++i) {
        if(i % 15 == 0) {
            std::cout << "fizzbuzz";
        } else if(i % 3 == 0) {
            std::cout << "fizz";
        } else if(i % 5 == 0) {
            std::cout << "buzz";
        } else {
            std::cout << i;
        }
        std::cout << std::endl;
    }
}