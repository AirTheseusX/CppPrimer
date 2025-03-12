#ifndef PROJECT_PERSON_H
#define PROJECT_PERSON_H

#include <string>
#include <iostream>

using std::string;

class Person
{
private:
    string name;
    string address;

public:
    string getName() const;
    string getAddress() const;
};

#endif
