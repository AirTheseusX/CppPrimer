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

void foo(const vector<int> &x, int index)
{
    if (index < x.size())
    {
        cout << x[index] << " " << endl;

        foo(x, index + 1);
    }
}

string (&fun(int x)) [10];
auto fun1(int x) -> string (*) [10];

int main(int argc, char *arg[])
{
    vector<int> n = {1,2,3,4,5};
    foo(n, 0);

    return 0;
}
