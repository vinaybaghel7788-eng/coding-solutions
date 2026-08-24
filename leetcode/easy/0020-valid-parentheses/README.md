# Valid Parentheses

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`, determine if the input string is valid.

An input string is valid if:

- Open brackets must be closed by the same type of brackets.
- Open brackets must be closed in the correct order.
- Every close bracket has a corresponding open bracket of the same type.

 

 **Example 1:** 

 **Input:**  s = "()"

 **Output:**  true

 **Example 2:** 

 **Input:**  s = "()[]{}"

 **Output:**  true

 **Example 3:** 

 **Input:**  s = "(]"

 **Output:**  false

 **Example 4:** 

 **Input:**  s = "([])"

 **Output:**  true

 **Example 5:** 

 **Input:**  s = "([)]"

 **Output:**  false

 

 **Constraints:** 

- 1 <= s.length <= 104
- s consists of parentheses only '()[]{}'.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.9 MB (beats 37.50%)  
**Submitted:** 2026-08-24T03:56:46.864Z  

```cpp
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int i = 0;
        int flag = 0;

        while (i < s.size()) {

            char current = s[i];
            i++;

            if (current == '(' || current == '{' || current == '[') {
                st.push(current);
            }
            else {

                if (st.empty()) {
                    flag = 1;
                    break;
                }

                if ((current == ')' && st.top() == '(') ||
                    (current == '}' && st.top() == '{') ||
                    (current == ']' && st.top() == '[')) {

                    st.pop();
                }
                else {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 1) {
            return false;
        }

        if (!st.empty()) {
            return false;
        }

        return true;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-parentheses/)