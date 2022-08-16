#include <iostream>

template<int i, bool div3, bool div4>
struct Fizzbuzz {
    constexpr static auto val = i;
};

template<int i>
struct Fizzbuzz<i, true, true> {
    constexpr static auto val = "Fizzbuzz";
};

template<int i>
struct Fizzbuzz<i, true, false> {
    constexpr static auto val = "Fizz";
};

template<int i>
struct Fizzbuzz<i, false, true> {
    constexpr static auto val = "Buzz";
};

template<int i>
void out() {
    out<i - 1>();
    std::cout << Fizzbuzz<i, i % 3 == 0, i % 5 == 0>::val << '\n';
}

template<>
void out<0>() { }

int main() {
    out<100>();
}