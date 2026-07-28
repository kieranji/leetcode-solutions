class Solution {
public:
    int romanToInt(string s) 
    {
        int index=0;
        int num=0;
        while(index<s.length())    
        {
            if(s[index]=='M')
            {
                num+=1000;
                index++;
            }
            else if(s[index]=='D')
            {
                num+=500;
                index++;
            }
            else if(s[index]=='C')
            {
                index++;
                if(s[index]=='D')
                {
                    num+=400;
                    index++;
                }
                else if(s[index]=='M')
                {
                    num+=900;
                    index++;
                }
                else
                {
                    num+=100;
                }
            }
            else if(s[index]=='L')
            {
                num+=50;
                index++;
            }
            else if(s[index]=='X')
            {
                index++;
                if(s[index]=='L')
                {
                    num+=40;
                    index++;
                }
                else if(s[index]=='C')
                {
                    num+=90;
                    index++;
                }
                else
                {
                    num+=10;
                }
            }
            else if(s[index]=='V')
            {
                num+=5;
                index++;
            }
            else if(s[index]=='I')
            {
                index++;
                if(s[index]=='V')
                {
                    num+=4;
                    index++;
                }
                else if(s[index]=='X')
                {
                    num+=9;
                    index++;
                }
                else
                {
                    num+=1;
                }
            }
        }
        return num;
    }
};
