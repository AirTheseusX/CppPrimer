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
    string str("Hello, World!");

    if (!str.empty())
        cout << str[0] << endl;

    cout << str << endl;
}
