# SEATNUMBER - Rating 613

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-10T08:35:00.326Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        if(x%n==0 ){
            cout << "yes" << endl;
        }else {
            cout << "no" << endl;
        }
    }
    return 0;
	// your code goes here

}

```

---

[View on CodeChef](https://www.codechef.com/problems/SEATNUMBER)