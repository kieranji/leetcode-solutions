class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();

        if (n==0) 
        {
            return "";
        }

        int bestStart=0;
        int bestLength=1;

        for (int i=0;i<n;i++) 
        {
            int left=i;
            int right=i;

            while(left>=0&&right<n&&s[left]==s[right]) 
            {
                int length=right-left+1;
                if(length>bestLength) 
                {
                    bestStart=left;
                    bestLength=length;
                }

                left--;
                right++;
            }
            left = i;
            right = i + 1;

            while (left>=0&&right<n&&s[left]==s[right]) 
            {
                int length=right-left+1;

                if(length>bestLength) 
                {
                    bestStart=left;
                    bestLength=length;
                }
                left--;
                right++;
            }
        }
        return s.substr(bestStart, bestLength);
    }
};
