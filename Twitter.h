#pragma  once

#import "Person.h"
#include <string>

class Twitter :
        public Person {
private:
    std::string twitterhandle;
public:
    Twitter(std::string first,
            std::string last,
            int arbitrary,
            std::string handle);

    ~Twitter();


};
