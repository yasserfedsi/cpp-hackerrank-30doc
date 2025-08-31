# Weird Number Challenge

## Objective

In this challenge, we learn about conditional statements.

## Task

Given an integer $n$, perform the following conditional actions:

- If $n$ is **odd**, print `Weird`.
- If $n$ is **even** and in the inclusive range of 2 to 5, print `Not Weird`.
- If $n$ is **even** and in the inclusive range of 6 to 20, print `Weird`.
- If $n$ is **even** and greater than 20, print `Not Weird`.

Complete the stub code provided in your editor to print whether or not $n$ is weird.

---

## Input Format

A single line containing a positive integer, $n$.

---

## Constraints

- $1 \leq n \leq 100$

---

## Output Format

Print `Weird` if the number is weird; otherwise, print `Not Weird`.

---

## Sample Input 0

```
3
```

## Sample Output 0

```
Weird
```

## Sample Input 1

```
24
```

## Sample Output 1

```
Not Weird
```

---

## Explanation

- Sample Case 0: $n = 3$ is odd → print `Weird`.
- Sample Case 1: $n = 24$ is even and > 20 → print `Not Weird`.

---

## Solution Code (C++)

```cpp
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));

    if (N % 2 == 1)
    {
        cout << "Weird" << endl;
    }
    else if (N >= 2 && N <= 5)
    {
        cout << "Not Weird" << endl;
    }
    else if (N >= 6 && N <= 20)
    {
        cout << "Weird" << endl;
    }
    else
    {
        cout << "Not Weird" << endl;
    }

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
```
