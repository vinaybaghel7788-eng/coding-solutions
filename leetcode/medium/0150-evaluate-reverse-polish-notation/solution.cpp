class Solution {
public:
    int evaluate(int a, int b, string op)
    {
        char c = op[0];

        switch(c)
        {
            case '+': return a + b;
            case '-': return a - b;
            case '*': return a * b;
            case '/': return a / b;
        }

        return 0;
    }

    int evalRPN(vector<string>& tokens) {
        stack<int> stk;

        for(int i = 0; i < tokens.size(); i++)
        {
            string symbol = tokens[i];

            if(symbol.size() == 1)
            {
                if(symbol == "+" || symbol == "-" || 
                   symbol == "*" || symbol == "/")
                {
                    int b = stk.top();
                    stk.pop();

                    int a = stk.top();
                    stk.pop();

                    int value = evaluate(a, b, symbol);
                    stk.push(value);
                }
                else
                {
                    stk.push(stoi(symbol));
                }
            }
            else
            {
                stk.push(stoi(symbol));
            }
        }

        return stk.top();
    }
};