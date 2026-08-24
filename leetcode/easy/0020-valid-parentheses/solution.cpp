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