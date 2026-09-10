# JENGA - Rating 610

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-10T08:23:34.406Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,x,y;
        cin >> n >> x >> y;
        if(y%x==0 && y <=n*x){
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

[View on CodeChef](https://www.codechef.com/problems/JENGA)