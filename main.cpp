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
    int num[5] = {1, 2, 3, 4 ,5};

    for (auto i : num)
        cout << i << " ";
    cout << endl;

    for (int *p = begin(num); p != end(num); p++)
    {
        *p = 0;
    }

    for (auto i : num)
        cout << i << " ";
    cout << endl;
}
