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
    vector<int> vnum;
    int input = 0;

    while (cin >> input)
    {
        if (cin.get() == '\n')
            break;

        cout << input << endl;
        vnum.push_back(input);
    }

    if (vnum.size() == 0)
    {
        cout << 0 << endl;
    }
    if (vnum.size() == 1)
    {
        cout << vnum[0] << endl;
    }
    else
    {
        for (int i = 0; i < vnum.size(); i += 2)
        {
            cout << vnum[i] + vnum[i + 1] << endl;
        }
    }
}
