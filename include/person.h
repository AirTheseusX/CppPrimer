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
    Person() = default;
    Person(string name, string address) : name(name), address(address) {}
    Person(istream &is);

    string getName() const;
    string getAddress() const;
    void readPerson(istream &is);
    void printPerson(ostream &os);
};

class Screen
{
public:
    Screen() = default;

private:
    string contents;
};

class Y;

class X
{
private:
    Y *pY;
};

class Y
{
private:
    X x;
};

#endif
