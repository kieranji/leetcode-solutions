class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_map<char, int> mp;
        int count=0;
        int max=0;
        int digit=0;
        for(int i=0;i<s.length();i++)    
        {
            if(mp.find(s[i])!=mp.end())
            {
                digit++;
                i=digit;
                if(count>max)
                {
                    max=count;
                }
                mp.clear();
                count=0;
            }
            mp[s[i]]=count;
            count++;
        }
        if(count>max)
        {
            max=count;
        }
        return max;
    }
};
