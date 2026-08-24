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