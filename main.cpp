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

void foo()
{

}

void  foo(int x)
{
    cout << x << endl;
}

void foo(int x, int y)
{
    cout << x << " " << y << endl;
}

void foo(double x, double y = 3.14)
{
    cout << x << " " << y << endl;
}

void foo(double x, int y)
{
    cout << x << " " << y << endl;
}

int main(int argc, char *arg[])
{
    foo(2.56, 42);
    foo(42);
    foo(42, 0);
    foo(2.56, 3.1);

    return 0;
}
