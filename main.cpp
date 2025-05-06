#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <stdexcept>
#include <initializer_list>
#include "sales_data.h"
#include "person.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::initializer_list;
using std::istringstream;


int main(int argc, char *arg[])
{
    Sales_data sales1;
    Sales_data sales2("Happy Day!");
    Sales_data sales3("Hello!", 10, 9.99);
    Sales_data sales4(cin);

    //StaticClass obj(12,13);
    //StaticClass::output();
    //obj.modify(90, 100);
    //StaticClass::output();

    string line, word;
    vector<PersonInfo> people;

    while (getline(cin, line))
    {
        PersonInfo info;
        istringstream
    }
    return 0;
}
