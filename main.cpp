#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <initializer_list>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::initializer_list;

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int bar(int, int);
typedef decltype(bar) *barfun;

int main(int argc, char *arg[])
{
    vector<barfun> funlist= {add, sub};

    cout << funlist[0](4, 5) << endl << funlist[1](9, 2) << endl;

    return 0;
}
