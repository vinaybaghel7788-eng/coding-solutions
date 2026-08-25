# Infix to Postfix

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given a string  **s**  representing an  **infix expression**. Convert this infix expression to a postfix expression.

- Infix expression: The expression of the form a op b. When an operator is in between every pair of operands.
- Postfix expression: The expression of the form a b op. When an operator is followed for every pair of operands.

 **Note:**  The precedence order is as follows: (^) has the highest precedence and is evaluated from right to left, (* and /) come next with left to right associativity, and (+ and -) have the lowest precedence with left to right associativity.

 **Examples :** 

```
Input: s = "a*(b+c)/d"
Output: abc+*d/
Explanation: The expression is a *(b+c)/d. First, inside the brackets, b+c becomes bc+. Now the expression looks like a* (bc+)/d. Next, multiply a with (bc+), so it becomes abc+ *. Finally, divide this result by d, so it becomes abc+* d/.

```

```
Input: s = "a+b*c+d"
Output: abc*+d+
Explanation: The expression a+b *c+d is converted by first doing b* c -> bc *, then adding a -> abc* +, and finally adding d -> abc*+d+.

```

```
Input: s = "(a+b)*(c+d)"
Output: ab+cd+*
Explanation: The expression (a+b) *(c+d) is converted by first doing (a+b) -> ab+, then doing (c+d) -> cd+, and finally the expression ab+* cd+ becomes ab+cd+*. 
```

 **Constraints:** 
1 ≤ s.length ≤ 5*103
s[i] can be an operand (a–z, A–Z, 0–9), an operator (+, -, *, /, ^) or a parenthesis ((,))

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-25T05:59:17.248Z  

```cpp
class Solution {
  public:

 bool prcd(char a,char b){
 if(a=='('||b=='('){
     return false;
 }
 else if(b==')'){
     return true;
 }
else if(a=='^'||a=='*'||a=='/'||a=='%'){
         if(b=='^'){
             return false;
         }
         else{
             return true;
         }
}
else if(a=='+'||a=='-'){
         if(b=='+'||b=='-'){
             return true;
         }
         else{
             return false;
         }
}


 }

   string infixToPostfix(string& s) {
        stack<char>stk;
        // code here

        string postfix;
        int i=0;
        while(i<s.size()){
            char symbol=s[i];
            i++;
            if(symbol>='a'&&symbol<='z'||symbol>='A'&&symbol<='Z'){
                postfix+=symbol;
            }
            else{
                while(!stk.empty() && prcd(stk.top(),symbol)){
                        char x=stk.top();
                        stk.pop();
                        postfix+=x;

                }
                if(symbol==')'){
                    stk.pop();
                }
                else{
                    stk.push(symbol);
                }

            }
        }
        while(!stk.empty()){
            char x=stk.top();stk.pop();
            postfix+=x;
        }
        return postfix;


    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1)