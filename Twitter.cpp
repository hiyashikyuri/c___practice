
#include "Twitter.h"
#include <iostream>

Twitter::Twitter(std::string first,
                 std::string last,
                 int arbitrary,
                 std::string handle) :
        Person(first, last, arbitrary),
        twitterhandle(handle) {
    std::cout << "constructing" << twitterhandle << std::endl;
}

Twitter::~Twitter() {
    std::cout << "constructing" << twitterhandle << std::endl;

}