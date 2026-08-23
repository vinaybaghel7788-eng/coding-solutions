# EXAMCHEF - Rating 519

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Exams

In Chefland, there are $X$ schools, and each school has $Y$ students.
The year end results are in and a total of $Z$ students passed the exams.

Assuming that all students appeared for the exams, find whether the number of students who passed in Chefland was  **strictly greater**  than $50\%$.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of three space-separated integers $X, Y,$ and $Z$, as mentioned in the statement.
### Output Format

For each test case, output on a new line, `YES`, if the total number of students who passed in Chefland was strictly greater than $50\%$, otherwise print `NO`.

You may print each character of the string in uppercase or lowercase (for example, the strings `YES`, `yEs`, `yes`, and `yeS` will all be treated as identical).

### Constraints
- $1 \leq T \leq 2\cdot 10^4$
- $1 \leq X \leq 5$
- $1 \leq Y \leq 50$
- $0 \leq Z \leq X\cdot Y$
### Sample 1:
Input
Output

```
4
2 10 12
2 10 3
1 5 3
3 6 9

```

```
YES
NO
YES
NO

```

### Explanation:

 **Test case $1$:**  The total number of students appeared were $2\cdot 10 = 20$. The number of students passed were $12$.
Thus, number of students who passed are $60\%$, which is strictly greater than $50\%$.

 **Test case $2$:**  The total number of students appeared were $2\cdot 10 = 20$. The number of students passed were $3$.
Thus, number of students who passed are $15\%$, which is less than $50\%$.

 **Test case $3$:**  The total number of students appeared were $1\cdot 5 = 5$. The number of students passed were $3$.
Thus, number of students who passed are $60\%$, which is strictly greater than $50\%$.

 **Test case $4$:**  The total number of students appeared were $3\cdot 6 = 18$. The number of students passed were $9$.
Thus, number of students who passed are $50\%$, which is equal to $50\%$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-23T09:35:38.294Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x,y,z;
    cin >> t;
    while(t--){
        cin >> x >> y >> z;
        if(x*y < 2*z){
            cout << "yes" << endl;
        } else{
            cout << "no" << endl;
        }
    }
	// your code goes here

}

```

---

[View on CodeChef](https://www.codechef.com/problems/EXAMCHEF)