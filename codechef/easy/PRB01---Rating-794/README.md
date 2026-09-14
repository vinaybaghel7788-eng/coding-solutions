# PRB01 - Rating 794

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Primality Test

Alice and Bob are meeting after a long time. As usual they love to play some math games. This times Alice takes the call and decides the game. The game is very simple, Alice says out an integer and Bob has to say whether the number is prime or not. Bob as usual knows the logic but since Alice doesn't give Bob much time to think, so Bob decides to write a computer program.

Help Bob accomplish this task by writing a computer program which will calculate whether the number is prime or not.

Note that 1 is not a prime number.

### Input

The first line of the input contains an integer T, the number of testcases. T lines follow.

Each of the next T lines contains an integer N which has to be tested for primality.

### Output

For each test case output in a separate line, "yes" if the number is prime else "no."

### Constraints
- 1 ≤ T ≤ 20
- 1 ≤ N ≤ 100000
### Sample 1:
Input
Output

```
5
23
13
20
1000
99991
```

```
yes
yes
no
no
yes
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-14T04:45:17.336Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n <=1)
    return false;
    if(n<=3) 
    return true;
    if(n%2==0 || n%3==0)
    return false;
    
    for(int i=5; i*i <=n; i+=6){
        if(n%i == 0 || n%(i+2)==0)
            return false;
    }
    return true;
}


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(isPrime(n)){
            cout << "yes" << endl;
        } else{
            cout << "no" << endl;
        }
    }
	return 0;
	// your code goes here

}

```

---

[View on CodeChef](https://www.codechef.com/problems/PRB01)