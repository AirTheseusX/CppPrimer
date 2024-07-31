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
        vnum.push_back(input);
    }

    cout << "input size: " << vnum.size() << endl;

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
        for (int i = 0,j = vnum.size() - 1; i <= j; i++, j--)
        {
            if (i != j)
            {
                cout << vnum[i] + vnum[j] << endl;
            }
            else
            {
                cout << vnum[i] << endl;
            }
        }
    }
}
