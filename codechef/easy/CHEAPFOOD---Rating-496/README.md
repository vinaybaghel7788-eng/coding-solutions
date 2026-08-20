# CHEAPFOOD - Rating 496

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-20T10:42:24.628Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x,y,z;
    cin >> t;
    while(t--){
        cin >> x >> y >> z;
        if(x+y <= z){
            cout << "2" << endl;
        } else if(z>=x){
            cout << "1" << endl;
        } else{
            cout << "0" << endl;
        }
    }
    return 0;
	// your code goes here

}

```

---

[View on CodeChef](https://www.codechef.com/problems/CHEAPFOOD)