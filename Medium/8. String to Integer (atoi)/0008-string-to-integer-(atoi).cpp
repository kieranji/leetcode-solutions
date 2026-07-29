class Solution {
public:
    int myAtoi(string s) 
    {
        int index=0;
        while(s[index]==' '&&index<s.length())
        {
            index++;
        }
        if(index==s.length())
        {
            return 0;
        }
        int symbol=0;
        if(s[index]=='-')
        {
            symbol=1;
            index++;
        }
        else if(s[index]=='+')
        {
            index++;
        }
        else if(s[index]>'9'||s[index]<'0')
        {
            return 0;
        }
        long long output=0;
        while(index<s.length())
        {
            if(s[index]>'9'||s[index]<'0')
            {
                if(symbol==1)
                {
                    output*=-1;
                }
                return static_cast<int>(output);
            }
            int digit=s[index]-'0';
            long long limit;
            if (symbol==1) 
            {
                limit=2147483648LL;
            }
            else 
            {
                limit=2147483647LL;
            }
            if (output>limit/10||(output==limit/10&&digit>limit%10))
            {
                if (symbol==1) 
                {
                    return INT_MIN;
                }
                else 
                {
                    return INT_MAX;
                }
            }
            output*=10;
            output+=s[index]-'0';
            index++;
        }
        if(symbol==1)
        {
            output*=-1;
        }
        return static_cast<int>(output);
    }
};
