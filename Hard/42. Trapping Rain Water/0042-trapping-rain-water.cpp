class Solution {
public:
    int trap(vector<int>& height) 
    {
        if(height.size()<3) 
        {
            return 0;
        }

        int left=0;
        int right=height.size()-1;
        int leftMax=0;
        int rightMax=0;
        int output=0;

        while(left<right) 
        {
            if(height[left]<=height[right]) 
            {
                if(height[left]>=leftMax) 
                {
                    leftMax=height[left];
                } 
                else 
                {
                    output+=leftMax-height[left];
                }
                left++;
            } 
            else 
            {
                if(height[right]>=rightMax) 
                {
                    rightMax=height[right];
                } 
                else 
                {
                    output+=rightMax-height[right];
                }
                right--;
            }
        }
        return output;
    }
};
