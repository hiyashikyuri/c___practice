#include <iostream>
//#include "Person.h"
#include "Twitter.h"
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    Person p1("Masahiro", "Okubo", 11);
    {
        Twitter t2("someonse", "Else", 11, "@gmai;com");
    }
    std::cout << "after ingerimost block" << std::endl;

    return 0;
}