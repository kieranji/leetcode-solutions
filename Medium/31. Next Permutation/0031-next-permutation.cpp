class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int i=nums.size()-1;
        int j=i;
        while(i>0&&nums[i-1]>=nums[i])
        {
            i--;
        }
        if(i==0)
        {
            return sort(nums.begin(),nums.end());
        }
        while(nums[j]<=nums[i-1])
        {
            j--;
        }
        swap(nums[i-1],nums[j]);
        reverse(nums.begin()+i,nums.end());
    }
};
