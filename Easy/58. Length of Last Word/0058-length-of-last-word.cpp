class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int lastSpace;
        int output=0;
        int wordCount=0;
        for(int i=0;i<s.length();i++)    
        {
            if(i+1<s.length()&&s[i]==' '&&((s[i+1]>='A'&&s[i+1]<='Z')||(s[i+1]>='a'&&s[i+1]<='z')))
            {
                lastSpace=i;
                i++;
                while(i<s.length()&&s[i]!=' ')
                {
                    i++;
                }
                output=i-lastSpace-1;
                i--;
            }
            else if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
            {
                lastSpace=-1;
                while(i<s.length()&&s[i]!=' ')
                {
                    i++;
                }
                output=i-lastSpace-1;
                i--;
            }
        }
        return output;
    }
};
