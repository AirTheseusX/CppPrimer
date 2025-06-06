#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <stdexcept>
#include <initializer_list>
#include <forward_list>
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

void insertStr(std::forward_list<string> &src, std::string str1, std::string str2)
{
    auto i = src.begin();
    auto pre = src.before_begin();
    bool  find = false;

    while (i != src.end())
    {
        pre = i;
        if (*i == str1)
        {
            i = src.insert_after(i, str2);
            find = true;
        }
        else
        {
            i++;
        }
    }

    if (find == false)
    {
        src.insert_after(pre, str2);
    }

    cout << "testSrc: ";

    for (auto &j : src)
    {
        cout << j << " ";
    }
}

int main(int argc, char *arg[])
{
    std::string str(vec,2);

    str.insert
}
