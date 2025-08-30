#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    // Those are predefined variables
    int i = 4;
    double d = 4.0;
    string s = "HackerRank";

    // Those are the variables to be used
    int j;
    double t;
    string m;

    // Reading inputs
    cin >> j;
    cin >> t;
    cin.ignore();
    getline(cin, m);

    // Performance operations
    cout << i + j << endl;
    cout << fixed << setprecision(1) << d + t << endl;
    cout << s + m << endl;

    return 0;
}
