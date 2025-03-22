#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <initializer_list>
#include "sales_data.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::initializer_list;


int main(int argc, char *arg[])
{
    Sales_data sales1;
    Sales_data sales2("Happy Day!");
    Sales_data sales3("Hello!", 10, 9.99);
    Sales_data sales4(cin);


    return 0;
}
