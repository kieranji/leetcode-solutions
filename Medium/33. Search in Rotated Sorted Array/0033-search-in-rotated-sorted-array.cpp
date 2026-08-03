class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int left=0;
        int right=nums.size()-1;
        int middle=(right-left)/2;
        while (left<=right) 
        {
            if(nums[middle]==target)
            {
                return middle;
            }

            if(nums[right]>=nums[middle])
            {
                if(target>nums[middle]&&target<=nums[right])
                {
                    left=middle+1;
                }
                else
                {
                    right=middle-1;
                }
            }
            else
            {
                if(target<nums[middle]&&target>=nums[left])
                {
                    right=middle-1;
                }
                else
                {
                    left=middle+1;
                }
            }
            middle=(right-left)/2+left;
        }
        return -1;
    }
};
