#ifndef PROJECT_PERSON_H
#define PROJECT_PERSON_H

#include <string>
#include <iostream>

using std::string;
using std::istream;
using std::ostream;

class Person
{
private:
    string name;
    string address;

public:
    string getName() const;
    string getAddress() const;
    void readPerson(istream is);
    void printPerson();
};

#endif
