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
int main(int argc, char *arg[]) {
    vector<int> num= {1,2};
    const vector<int> num2 = {1,2,3};
    auto it = num.begin(), it1 = num2.begin();
    auto it2 = num.cbegin(), it4 = num2.cbegin();

    cout << "result 3: " << numCheck(3) << endl;
    cout << "result 90: " << numCheck(90) << endl;
}
