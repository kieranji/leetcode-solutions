class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> output;
        sort(nums.begin(), nums.end());
        output.push_back(nums);
        while(true)
        {
            int i=nums.size()-1;
            int j=i;
            while(i>0&&nums[i-1]>=nums[i])
            {
                i--;
            }
            if(i==0)
            {
                break;
            }
            while(nums[j]<=nums[i-1])
            {
                j--;
            }
            swap(nums[i-1],nums[j]);
            reverse(nums.begin()+i,nums.end());
            output.push_back(nums);
        }
        return output;
    }
};
