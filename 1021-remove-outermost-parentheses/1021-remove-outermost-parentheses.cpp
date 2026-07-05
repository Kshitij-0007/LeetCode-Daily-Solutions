class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string newStr;
        for(char ch: s)
        {
            if(ch=='(')
            {
                if(!st.empty())
                    newStr+=ch;
                st.push(ch);
            }
            else{
                st.pop();
                if(!st.empty())
                {
                    newStr+=ch;
                }
            }
        }
        return newStr;
    }
};