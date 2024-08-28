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

unsigned long long count = 0;
int & foo(int *arry, int index)
{
    return arry[index];
}

int main(int argc, char *arg[])
{
    int arry[10] = {0};

    for (int i = 0; i < 10; ++i)
    {
        foo(arry, i)  = i;
        cout << arry[i] << " ";
    }

    return 0;
}
