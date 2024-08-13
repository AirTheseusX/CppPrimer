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
    vector<int> n = {1,2,3,4,5};

    for (auto it = n.begin(); it != n.end(); it++)
    {
        *it = ((*it) % 2 == 0) ? (*it *= 2) : *it;

        cout <<  *it << " " << endl;
    }
}
