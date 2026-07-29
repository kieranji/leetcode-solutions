class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int copy;
        for(int i=0;i<haystack.length();i++)
        {
            if(haystack[i]==needle[0])
            {
                copy=i;
                for(int j=0;j<needle.length();j++)
                {
                    if(haystack[copy]==needle[j])
                    {
                        copy++;
                    }
                    else
                    {
                        break;
                    }
                }
                if(copy-i==needle.length())
                {
                    return i;
                }
            }
        }
        return -1;
    }
};
