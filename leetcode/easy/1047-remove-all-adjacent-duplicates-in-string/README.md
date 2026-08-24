# Remove All Adjacent Duplicates In String

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given a string `s` consisting of lowercase English letters. A  **duplicate removal**  consists of choosing two  **adjacent**  and  **equal**  letters and removing them.

We repeatedly make  **duplicate removals**  on `s` until we no longer can.

Return  *the final string after all such duplicate removals have been made*. It can be proven that the answer is  **unique**.

 

 **Example 1:** 

```
Input: s = "abbaca"
Output: "ca"
Explanation: 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".

```

 **Example 2:** 

```
Input: s = "azxxzy"
Output: "ay"

```

 

 **Constraints:** 

- 1 <= s.length <= 105
- s consists of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 465 ms (beats 9.95%)  
**Memory:** 783.6 MB (beats 5.41%)  
**Submitted:** 2026-08-24T06:43:14.012Z  

```cpp
class Solution {
public:
    string removeDuplicates(string s) {
        int i=0;
        stack<char>stk;
        while(i<s.size()){
            char x=s[i];
            i++;
             if(stk.empty())
             {
                stk.push(x);
             }
             else 
             {
                if(x==stk.top())
                {
                    stk.pop();
                }
                else
                {
                    stk.push(x);
                }
             }
        }
       string str;
       while(!stk.empty())
       {
        char c=stk.top();
        stk.pop();
        str=str+c;
       }
       reverse(str.begin(),str.end());
       return str;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/)