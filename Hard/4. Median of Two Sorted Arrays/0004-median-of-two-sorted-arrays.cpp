class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> nums(nums1.size()+nums2.size());
        int index=0;
        while(index<nums1.size())
        {
            nums[index]=nums1[index];
            index++;
        }
        int index_1=0;
        while(index_1<nums2.size())
        {
            nums[index]=nums2[index_1];
            index++;
            index_1++;
        }
        sort(nums.begin(),nums.end());
        if((nums1.size()+nums2.size())%2==0)
        {
            return ((nums[nums.size()/2-1]+nums[nums.size()/2])/2.0);
        }
        else
        {
            return (nums[(nums.size()-1)/2]);
        }
    }
};
