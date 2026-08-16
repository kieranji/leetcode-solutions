class Solution {
public:
    string getPermutation(int n, int k) 
    {
        string output;
        vector<char> nums;
        for(int i=1;i<=n;i++)
        {
            nums.push_back(i+'0');
        }
        while(n>0)
        {
            int size=1;
            for(int i=1;i<n;i++)
            {
                size*=i;
            }
            int count=-1;
            while(k>0)
            {
                k-=size;
                count++;
            }
            k+=size;
            output+=nums[count];
            nums.erase(nums.begin()+count);
            n--;
        }
        return output;
    }
};
