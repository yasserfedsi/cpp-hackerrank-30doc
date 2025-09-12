# Reverse Array Elements Challenge

## Problem Statement

Given an array of integers, print its elements in **reverse order** as a single line of space-separated numbers.

---

## Input Format

- The first line contains an integer `n` — the size of the array.
- The second line contains `n` space-separated integers that describe the array's elements.

---

## Output Format

Print the elements of the array in reverse order as a single line of space-separated numbers.

---

## Constraints

- `1 ≤ n ≤ 1000`
- `1 ≤ arr[i] ≤ 10000`, where `arr[i]` is the i-th integer in the array.

---

## Example

### Input

```
4
1 4 3 2
```

### Output

```
2 3 4 1
```

---

## Explanation

- Original array: `[1, 4, 3, 2]`
- Reversed array: `[2, 3, 4, 1]`
- Print as space-separated values: `2 3 4 1`

---

## Algorithm

1. Read integer `n`.
2. Read `n` integers into an array.
3. Reverse the array.
4. Print the array elements separated by spaces.

---

## Sample Code (C++)

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i];
        if (i > 0) cout << " ";
    }
    return 0;
}
```
