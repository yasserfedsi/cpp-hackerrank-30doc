#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    string query;
    cin >> n;

    unordered_map<string, string> phoneBook;

    for (int i = 0; i < n; i++)
    {
        string name, number;
        cin >> name >> number;
        phoneBook[name] = number;
    }

    while (cin >> query)
    {
        if (phoneBook.find(query) != phoneBook.end())
        {
            cout << query << "=" << phoneBook[query] << endl;
        }
        else
        {
            cout << "Not found" << endl;
        }
    }

    return 0;
}
