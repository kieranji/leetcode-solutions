class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        sort(nums.begin(),nums.end());
        int output=nums[0]+nums[1]+nums[2];   
        int difference;  
        int left;  
        int right; 
        int sum; 
        int closest=abs(output-target);  
        for(int i=0;i<nums.size()-2;i++)
        {
            left=i+1;
            right=nums.size()-1;
            while(left<right)
            {
                sum=nums[i]+nums[left]+nums[right];
                difference=abs(sum-target);
                if(difference<closest)
                {
                    closest=difference;
                    output=sum;
                }
                if(sum==target)
                {
                    return sum;
                }
                else if(sum>target)
                {
                    right--;
                }
                else
                {
                    left++;
                }
            }
        }
        return output;    
    }
};
