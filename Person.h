#ifndef C_PRACTICE_PERSON_H
#define C_PRACTICE_PERSON_H

#include <string>

class Person {
private :
    std::string firstname;
    std::string lastname;


public:
    Person(std::string first,
           std::string last,
           int arbitrary);
};


#endif //C_PRACTICE_PERSON_H
