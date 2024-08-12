#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

int main()
{
    int num = 0;

    while (cin >> num)
    {
        if (num == 42)
        {
            break;
        }
    }

    cout << "OVER" << endl;
}
