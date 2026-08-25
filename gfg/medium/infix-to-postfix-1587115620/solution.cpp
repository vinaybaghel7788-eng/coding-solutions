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