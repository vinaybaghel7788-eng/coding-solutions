# SNDMAX - Rating 300

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Second Max of Three Numbers
### Problem Statement

Write a program that accepts sets of three numbers, and prints the  *second-maximum number*  among the three.

### Input
- First line contains the number of triples, N.
- The next N lines which follow each have three space separated integers.
### Output

For each of the  **N**  triples, output one new line which contains the second-maximum integer among the three.

### Constraints
- 1 ≤ N ≤ 6
- 1 ≤ every integer ≤ 10000
- The three integers in a single triplet are all distinct. That is, no two of them are equal.
### Sample 1:
Input
Output

```
3
1 2 3
10 15 5
100 999 500
```

```
2
10
500
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-20T10:52:57.488Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int nums[3];
        cin >> nums[0] >> nums[1] >> nums[2];
        
        
        sort(nums, nums + 3);
        

        cout << nums[1] << endl;
    }
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/SNDMAX)