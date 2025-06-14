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
#include <stack>
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

void strReplace(std::string &src, std::string str1, std::string str2) {
    std::string::size_type pos1 = 0;

    pos1 = src.find(str1);

    //src.erase(pos1, pos1 + str1.length());
    //src.insert(pos1, str2);
    src.replace(pos1, str1.length(), str1);
}

std::string nameGen(std::string name, std::string prefix, std::string succ)
{
    name.insert(name.begin(), prefix.begin(), prefix.end());

    name.append(succ);

    return name;
}

std::string nameGenV2(std::string name, std::string prefix, std::string succ)
{
    name.insert(0, prefix);
    name.insert(name.length(), succ);

    return name;
}

int expCal(std::string str) {
    auto elementStack = std::stack<char>();

    for (char i : str) {
        if (i >= '1' && i <= '9' ) {
            elementStack.push(i);
        }
    }
}

int main(int argc, char *arg[])
{
    auto str = std::string("ab2c3d7R4E6");
    std::string::size_type pos = 0;

    cout << (str.find("99") == std::string::npos);
    cout << endl;

    for (int i = 0; i < str.length();) {
        //if ((pos = str.find_first_of("0123456789", i)) != std::string::npos) {
        if ((pos = str.find_first_of("abcdefgABCDEFGR", i)) != std::string::npos) {
            cout << str[pos] << " ";
            i = pos + 1;
        }
        else {
            i++;
        }
    }

    cout << endl;

    for (int i = 0; i < str.length();) {
        if ((pos = str.find_first_not_of("abcdefgABCDEFGR", i)) != std::string::npos) {
            cout << "pos: " << pos << endl;
            cout << str[pos] << " ";
            i = pos + 1;
        }
        else {
            i++;
        }
    }

    auto str1 = std::vector<string> {"11.22", "22.33", "33.445", "44.999"};
    double sum = 0.0;

    for (auto i : str1)
    {
        sum += stod(i);
    }

    cout << "sum: " << sum << endl;
}
