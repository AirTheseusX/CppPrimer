#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

int main()
{
    vector<string> buff;
    string str;

    while (cin >> str && !str.empty())
    {
        cout << "print: " << str << endl;

        for (auto i : buff)
        {
            try
            {
                if (i == str)
                {
                    throw std::runtime_error("Same input!");
                }
            }
            catch (std::runtime_error err)
            {
                cout << err.what() << "Catch run time error!" << endl;
                break;
            }
        }

        buff.push_back(str);
    }

    cout << "no same str!" << endl;

    return 0;
}
