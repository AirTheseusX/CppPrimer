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
    vector<int> num= {1,2};
    const vector<int> num2 = {1,2,3};
    auto it = num.begin();
    auto it1 = num2.begin();
    auto it2 = num.cbegin();
    auto it4 = num2.cbegin();

    cout << "result 3: " << numCheck(3) << endl;
    cout << "result 90: " << numCheck(90) << endl;

    std::vector<int> str1(10, 9);
    auto str2 = std::vector<int> {1, 2};
    auto it5 = str1.begin();
    auto it6 = str2.begin();

    cout << "it5: " << *it5 << " " << "it6: " << *it6 << endl;

    for (auto &i : str2)
        cout << i << endl;

    swap(str1, str2);

    cout << "str1: ";
    for (auto &i : str1)
        cout << i << " ";

    cout << endl;

    cout << "str2: ";
    for (auto  &i : str2)
        cout << i << " ";

    cout << "after swap" << endl;
    cout <<"it5: " << *it5 << " " << "it6: " << *it6;

    cout << endl;

    auto v1 = std::vector<int>{1,2};
    auto v2 = std::vector<int>{1,2};
    auto v3 = std::vector<int>(10, 2);
    auto v4 = std::vector<int>(8,2);

    auto v5 = std::list<int>{1,2,3,4};
    auto v6 = std::vector<int>{1,2,3,4};

    cout << vectorCmp(v5, v6) << endl;

    auto v7 = vector<int>{1,2,3,4};
    v7.push_back(5);

    std::string str3;
    auto que = std::list<std::string>();

    cout << "que: ";
    for (auto &i : que)
        cout << i;

    auto list = std::list<int>{1,2,3,4,5,6,7,8,9,10};
    auto deque1 = std::deque<int>();
    auto deque2 = std::deque<int>();

    cout << endl;

    for (auto &i : list)
    {
        if (i & 1)
        {
            deque1.push_back(i);
        }
        else{
            deque2.push_back(i);
        }
    }

    cout << "deque1: ";
    for (auto &i : deque1)
        cout << i << " ";

    cout << endl;

    cout << "deque2: ";
    for (auto &i : deque2)
        cout << i << " ";
}
