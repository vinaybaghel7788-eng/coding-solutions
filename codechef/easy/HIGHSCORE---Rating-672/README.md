# HIGHSCORE - Rating 672

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Score High

Chef is taking a tough examination. The question paper consists of $N$ objective problems and each problem has $4$ options $A, B, C,$ and $D$, out of which,  **exactly one**  option is correct.

Since Chef did not study for the exam, he does not know the answer to any of the problems. Chef was looking nearby for help when his friend somehow communicated the following information:

- Exactly $N_A$ problems have option $A$ as the answer.
- Exactly $N_B$ problems have option $B$ as the answer.
- Exactly $N_C$ problems have option $C$ as the answer.
- Exactly $N_D$ problems have option $D$ as the answer.

Note that:

- $N_A + N_B + N_C + N_D = N$.
- Each problem is worth exactly $1$ mark and there is no negative marking.
- Even though Chef knows the number of correct options of each type, he does not know the correct answer to any problem.

Based on the given information, find the  **maximum**  marks Chef can  **guarantee**  if he marks the answers optimally.

### Input Format
- First line will contain $T$, number of test cases. Then the test cases follow.
- First line of each test case contains an integer $N$ denoting the number of problems.
- Second line of each test case contains $4$ integers $N_A, N_B, N_C,$ and $N_D$ - as mentioned in the problem statement.
### Output Format

For each test case, output the  **maximum**  marks Chef can  **guarantee**  if he marks the answers optimally.

### Constraints
- $1 \leq T \leq 1000$
- $1 \leq N \leq 10^5$
- $0 \leq N_A, N_B, N_C, N_D \leq N$
- $N_A + N_B + N_C + N_D = N$
### Sample 1:
Input
Output

```
2
5
0 0 5 0
10
7 1 1 1

```

```
5
7

```

### Explanation:

 **Test Case $1$:**  Chef knows that all the problems have answer as option $C$ and thus he will mark all the answers as $C$ and get $5$ marks.

 **Test Case $2$:**  It will be optimal for Chef to mark all the options as $A$ which will yield him $7$ marks. Thus, irrespective of the answer key, Chef can guarantee $7$ marks by marking all answers as option $A$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-04T10:30:38.286Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,a,b,c,d;
    cin >> t;
    while(t--){
        cin >> n >> a >> b >> c >> d;
        cout << max({a,b,c,d}) << endl;
    }
	// your code goes here

}

```

---

[View on CodeChef](https://www.codechef.com/problems/HIGHSCORE)