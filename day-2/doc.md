# Meal Cost Calculator Challenge

## Objective

In this challenge, you will work with arithmetic operators.

**Task:**
Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost. Round the result to the nearest integer.

---

## Function Description

Complete the `solve` function below:

```cpp
void solve(double meal_cost, int tip_percent, int tax_percent);
```

### Parameters

- `meal_cost` (double): the base cost of the meal
- `tip_percent` (int): the tip percentage
- `tax_percent` (int): the tax percentage

### Output

Prints the total cost (rounded to the nearest integer).

---

## Input Format

There are 3 lines of numeric input:

1. A double, the cost of the meal before tax and tip.
2. An integer, the percentage of the meal cost being added as tip.
3. An integer, the percentage of the meal cost being added as tax.

---

## Sample Input

```
12.00
20
8
```

## Sample Output

```
15
```

---

## Explanation

- Tip = 12 × (20 ÷ 100) = 2.4
- Tax = 12 × (8 ÷ 100) = 0.96
- Total = 12 + 2.4 + 0.96 = 15.36
- Rounded = 15

---

## Solution Code (C++)

```cpp
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'solve' function below.
 *
 * The function accepts following parameters:
 *  1. DOUBLE meal_cost
 *  2. INTEGER tip_percent
 *  3. INTEGER tax_percent
 */

void solve(double meal_cost, int tip_percent, int tax_percent)
{
    /* Code goes here */
}

int main()
{
    string meal_cost_temp;
    getline(cin, meal_cost_temp);

    double meal_cost = stod(ltrim(rtrim(meal_cost_temp)));

    string tip_percent_temp;
    getline(cin, tip_percent_temp);

    int tip_percent = stoi(ltrim(rtrim(tip_percent_temp)));

    string tax_percent_temp;
    getline(cin, tax_percent_temp);

    int tax_percent = stoi(ltrim(rtrim(tax_percent_temp)));

    solve(meal_cost, tip_percent, tax_percent);

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
