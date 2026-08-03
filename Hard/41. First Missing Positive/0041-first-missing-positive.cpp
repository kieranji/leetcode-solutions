class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        if(nums[nums.size()-1]<=0)
        {
            return 1;
        }
        int i=0;
        while(nums[i]<=0)
        {
            i++;
        }
        int output=1;
        while(i<nums.size())
        {
            if(nums[i]>output)
            {
                return output;
            }
            if(i<nums.size()-1&&nums[i+1]==nums[i])
            {
                output--;
            }
            output++;
            i++;
        }
        return output;
    }
};
