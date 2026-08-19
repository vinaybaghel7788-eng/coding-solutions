# ASSIGNMNT - Rating 468

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Pending Assignments

Chef has finally decided to complete all of his pending assignments.

There are $X$ assignments where each assignment takes $Y$  **minutes**  to complete.
Find whether Chef would be able to complete all the assignments in $Z$  **days**.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists three space-separated integers $X, Y,$ and $Z$ — the number of assignments, time taken in minutes to complete each assignment, and the number of days in which Chef wants to complete the assignments.
### Output Format

For each test case, output on a new line, `YES`, if Chef would be able to complete all the assignments in $Z$  **days**. Otherwise, print `NO`.

You may print each character of the string in uppercase or lowercase (for example, the strings `YES`, `yEs`, `yes`, and `yeS` will all be treated as identical).

### Constraints
- $1 \leq T \leq 10^5$
- $1 \leq X, Y \leq 100$
- $1 \leq Z \leq 10$
### Sample 1:
Input
Output

```
3
5 5 5
50 80 2
20 72 1

```

```
YES
NO
YES
```

### Explanation:

 **Test case $1$:**  Chef needs a total of $5\cdot 5 = 25$ minutes to complete all the assignments. Thus, he would be able to complete the assignments in $5$ days.

 **Test case $2$:**  Chef needs a total of $50\cdot 80 = 4000$ minutes to complete all the assignments. However, in $2$ days, he only has $2\cdot 24\cdot 60 = 2880$ minutes.
Thus, he would not be able to complete the assignments in $2$ days.

 **Test case $3$:**  Chef needs a total of $20\cdot 72 = 1440$ minutes to complete all the assignments. In $1$ days, he has $24\cdot 60 = 1440$ minutes.
Thus, he would be able to complete the assignments in $1$ day.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-19T04:23:12.037Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x,y,z;
    cin >> t;
    while(t--){
        cin >> x >> y >>  z;
        if((x*y)<= z*1440){
            cout << "yes" << endl;
        } else{
            cout << "no" << endl;
         }
    }
    
	// your code goes here

}

```

---

[View on CodeChef](https://www.codechef.com/problems/ASSIGNMNT)