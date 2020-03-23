#include <iostream>
#include <animals.hpp>
int main() {
    // (Passaro : Animal {}) p;
    Cao c;
    Animal *a = &c;
    std::cout << c.who_am_i() << "\n";
    std::cout << a->who_am_i() << "\n";
}