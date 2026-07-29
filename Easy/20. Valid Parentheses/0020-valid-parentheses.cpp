class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> brackets;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==40||s[i]==91||s[i]==123)
            {
                brackets.push(s[i]);
            }
            else
            {
                if(brackets.empty())
                {
                    return false;
                }
                char left=brackets.top();
                if(s[i]==41)
                {
                    if(left!=40)
                    {
                        return false;
                    }
                    brackets.pop();
                }
                else if(s[i]==93)
                {
                    if(left!=91)
                    {
                        return false;
                    }
                    brackets.pop();
                }
                else if(s[i]==125)
                {
                    if(left!=123)
                    {
                        return false;
                    }
                    brackets.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if(!brackets.empty())
        {
            return false;
        }
        return true;
    }
};
