class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x<0)
        {
            return false;
        }
        string num="";
        while(x>0)
        {
            num+=x%10+'0';
            x/=10;
        }
        int left=0;
        int right=num.length()-1;
        if(num.length()%2==0)
        {
            while(left<right)
            {
                if(num[left]!=num[right])
                {
                    return false;
                }
                left++;
                right--;
            }
        }
        else
        {
            while(left!=right)
            {
                if(num[left]!=num[right])
                {
                    return false;
                }
                left++;
                right--;
            }
        }
        return true;
    }
};
