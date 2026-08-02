class Solution {
public:
    string countAndSay(int n) 
    {
        string nums="1";
        string lastNums;
        for(int j=1;j<n;j++)
        {
            string lastNums=nums;
            nums="";
            int i=0;
            while(i<lastNums.length())
            {
                char current=lastNums[i];
                int count=0;
                while (i<lastNums.length()&&lastNums[i]==current) 
                {
                    count++;
                    i++;
                }
                nums+=to_string(count);
                nums+=current;
            }
        }
        return nums;
    }
};
