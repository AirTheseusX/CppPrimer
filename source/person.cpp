#include "person.h"

using std::istream;
using std::ostream;
using std::cout;
using std::endl;

Person::Person(istream &is) {
    readPerson(is);
}

string Person::getName() const {
    return this->name;
}

string Person::getAddress() const {
    return this->address;
}

void Person::readPerson(istream &is) {
    is >> this->name >> this->address;
}

void Person::printPerson(ostream &os) {
    os << "name: " << this->name << std::endl;
    os << "address: " << this->address << std::endl;
}

void ConstClass::printValue() {
    cout << "const value: " << value << endl;
}

void StaticClass::output() {
    cout << "valX: " << commonX << "valY: " << commonY << endl;
}

/*
void StaticClass::modify(int x, int y) {
    valX = x;
    valY = y;
}*/