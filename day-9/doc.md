### Problem Statement

Write a recursive function `factorial` that returns the factorial of a given integer `n`.

---

### Input Format

- A single integer `n`

---

### Sample Input

```
3
```

### Sample Output

```
6
```

---

### Explanation

Factorial is defined as:

- `n! = n × (n-1)!`
- Base case: `0! = 1`, `1! = 1`

---

### C++ Solution

```cpp
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    cin >> n;

    cout << factorial(n);

    return 0;
}
```
