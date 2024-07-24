#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void foo(int &x)
{
    cout << "x: " << x << endl;
    x = 11;
}
int main()
{
    int a = 10;
    int &b = a;

    foo(a);
    foo(b);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "test" << endl;
}
