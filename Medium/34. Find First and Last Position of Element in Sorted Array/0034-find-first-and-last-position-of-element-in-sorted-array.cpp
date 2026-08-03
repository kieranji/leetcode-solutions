class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int> output={-1,-1};
        int left=0;
        int right=nums.size()-1;
        while(left<=right)
        {
            int middle=(right-left)/2+left;
            if(nums[middle]==target)
            {
                output[0]=middle;
                right=middle-1;
            }
            else if(nums[middle]>target)
            {
                right=middle-1;
            }
            else if(nums[middle]<target)
            {
                left=middle+1;
            }
        }
        if(output[0]==-1)
        {
            return output;
        }
        left=0;
        right=nums.size()-1;
        while(left<=right)
        {
            int middle=(right-left)/2+left;
            if(nums[middle]==target)
            {
                output[1]=middle;
                left=middle+1;
            }
            else if(nums[middle]>target)
            {
                right=middle-1;
            }
            else if(nums[middle]<target)
            {
                left=middle+1;
            }
        }
        return output;
    }
};
