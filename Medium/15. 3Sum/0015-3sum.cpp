class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>> output;

        int left=0;
        int right=0;
        int lastRight;
        int lastLeft;

        for(int i=0;i<nums.size()-2;i++)
        {
            if(i>0&&nums[i]==nums[i-1])
            {
                continue;
            }
            left=i+1;
            right=nums.size()-1;
            while(left<right&&nums[i]<=0)
            {
                if(nums[i]+nums[left]+nums[right]==0)
                {
                    output.push_back({nums[i],nums[left],nums[right]});
                    lastRight=nums[right];
                    lastLeft=nums[left];
                    left++;
                    right--;
                    while(left<right&&nums[left]==lastLeft)
                    {
                        left++;
                    }
                    while(left<right&&nums[right]==lastRight)
                    {
                        right--;
                    }
                }
                else if(nums[i]+nums[left]+nums[right]<0)
                {
                    left++;
                }
                else if(nums[i]+nums[left]+nums[right]>0)
                {
                    right--;
                }
            }
        }
        return output;
    }
};
