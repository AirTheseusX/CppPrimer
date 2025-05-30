#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <stdexcept>
#include <initializer_list>
#include "sales_data.h"
#include "person.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::initializer_list;
using std::istringstream;

int numCheck(int num) {
    vector<int> numList = {0,1,2,3,4,5,6,7,8,9};

    for (vector<int>::iterator it = numList.begin(); it != numList.end(); it++) {
        if (*it == num) {
            return *it;
        }
    }

    return -1;
}

bool vectorCmp(std::list<int> const &v1, std::vector<int> const &v2)
{
    if (v1.size() != v2.size())
        return false;
    auto i = v1.begin();
    auto j = v2.begin();

    for (; i != v1.end(); i++, j++)
    {
        cout << "i: " << *i << " " << "j: " << *j << endl;

        if (*i != *j)
            return false;
    }

    return true;
}

int main(int argc, char *arg[]) {
    int a[] = {0,1,1,2,3,5,8,13,21,55,89};
    auto v = std::vector<int>();
    auto l = std::list<int>();

    for (auto i : a) {
        if (i & 1) {
            v.push_back(i);
        }
        else {
            l.push_back(i);
        }
    }

    cout << "v: ";
    for (auto &i : v)
        cout << i << " ";

    cout << endl;

    cout << "l: ";
    for (auto &i : l)
        cout << i << " ";
}
