# FCTRL2 - Rating 648

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Small factorials

You are asked to calculate factorials of some small positive integers.

### Input

An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, each containing a single integer n, 1 <= n <= 100

### Output

For each integer n given at input, display a line with the value of n!

 **Note:**  For larger numbers, their factorial can overflows any available numeric data type in C.

### Sample 1:
Input
Output

```
4
1
2
5
3
```

```
1
2
120
6
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-16T14:18:23.065Z  

```c_cpp
#include <iostream>
using namespace std;

void factorial(int n) {
    int result[200];
    int size = 1;

    result[0] = 1;

    for (int i = 2; i <= n; i++) {
        int carry = 0;

        for (int j = 0; j < size; j++) {
            int value = result[j] * i + carry;

            result[j] = value % 10;
            carry = value / 10;
        }

        while (carry) {
            result[size] = carry % 10;
            carry /= 10;
            size++;
        }
    }

    // Print from most significant digit
    for (int i = size - 1; i >= 0; i--) {
        cout << result[i];
    }

    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        factorial(n);
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/FCTRL2)