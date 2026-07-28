class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int slow=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(val==nums[i])
            {
                count++;
            }
            else
            {
                nums[slow]=nums[i];
                slow++;
            }
        }
        return nums.size()-count;
    }
};
