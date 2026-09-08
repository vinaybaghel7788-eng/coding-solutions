# Unique Paths

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

There is a robot on an `m x n` grid. The robot is initially located at the  **top-left corner**  (i.e., `grid[0][0]`). The robot tries to move to the  **bottom-right corner**  (i.e., `grid[m - 1][n - 1]`). The robot can only move either down or right at any point in time.

Given the two integers `m` and `n`, return  *the number of possible unique paths that the robot can take to reach the bottom-right corner*.

The test cases are generated so that the answer will be less than or equal to `2 * 109`.

 

 **Example 1:** 

```
Input: m = 3, n = 7
Output: 28

```

 **Example 2:** 

```
Input: m = 3, n = 2
Output: 3
Explanation: From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
1. Right -> Down -> Down
2. Down -> Down -> Right
3. Down -> Right -> Down

```

 

 **Constraints:** 

- 1 <= m, n <= 100

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 7.9 MB  
**Submitted:** 2026-09-08T06:55:03.328Z  

```cpp
class Solution {
public:
    int Helper(int x,int y)
    {
        if(x==0 && y==0)
            return 1;
        if(x<0 || y<0)
            return 0;
        return Helper(x,y-1) + Helper(x-1,y);
    }
    int uniquePaths(int m, int n) {
       return Helper(m-1,n-1);

        
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/unique-paths/)