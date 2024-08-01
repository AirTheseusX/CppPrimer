#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> vnum = {1, 2, 3, 4, 5, 6, 7, 8,9, 10};

    for (auto it = vnum.begin(); it != vnum.end();  it++)
        *it *= 2;

    for (auto i : vnum)
        cout << i << " ";
}
