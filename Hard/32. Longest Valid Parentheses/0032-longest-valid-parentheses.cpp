class Solution {
public:
    int longestValidParentheses(string s) 
    {
        stack<int> brackets;
        int length=0;
        int output=0;
        brackets.push(-1);
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                brackets.push(i);
            }
            else
            {
                brackets.pop();
                if(brackets.empty())
                {
                    brackets.push(i);
                }
                else
                {
                    length=i-brackets.top();
                    if(length>output) 
                    {
                        output=length;
                    }
                    length=0;
                }
            }
        }
        return output;
    }
};
