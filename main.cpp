#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

void foo(int &x)
{
    cout << "x: " << x << endl;
    x = 11;
}

int main()
{
    const string s("qe*(di)8adu;adiw-=*4ujr");
    string str("");

    for (auto &i: s)
        if (isalpha(i) || isalnum(i))
            str += i;

    cout << str << endl;
}
