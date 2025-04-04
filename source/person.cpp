#include "person.h"

using std::istream;
using std::ostream;

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
