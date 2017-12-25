#include <iostream>
#include "Person.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Person p1("Masahiro", "Okubo", 11);
    p1.arbitrarynumber = 124;
    Person p2("Matt", "Crammer", 11);
    p2.arbitrarynumber = 457;
    std::cout << p1.arbitrarynumber << std::endl;
    std::cout << p2.arbitrarynumber << std::endl;

    return 0;
}