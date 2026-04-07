### Problem Statement

Given names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. You will then be given an unknown number of names to query your phone book for.

For each queried name:

* Print the associated entry in the format: `name=phoneNumber`
* If the name is not found, print: `Not found`

---

### Input Format

* The first line contains an integer `n`, the number of entries.
* The next `n` lines contain a name and phone number.
* After that, an unknown number of queries follow (until EOF).

---

### Sample Input

```
3
sam 99912222
tom 11122222
harry 12299933
sam
edward
harry
```

### Sample Output

```
sam=99912222
Not found
harry=12299933
```

---

### C++ Solution

```cpp
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, string> phoneBook;

    for (int i = 0; i < n; i++) {
        string name, number;
        cin >> name >> number;
        phoneBook[name] = number;
    }

    string query;
    while (cin >> query) {
        if (phoneBook.find(query) != phoneBook.end()) {
            cout << query << "=" << phoneBook[query] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }

    return 0;
}
```