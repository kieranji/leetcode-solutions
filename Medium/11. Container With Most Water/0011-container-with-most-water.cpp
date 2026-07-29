class Solution {
public:
    int maxArea(vector<int>& height) {
        int altitude = 1;
        int left = 0;
        int right = height.size() - 1;
        int answer = 0;

        while(left<right) 
        {
            while(left<right&&height[left]<altitude) 
            {
                left++;
            }

            while(left<right&&height[right]<altitude) 
            {
                right--;
            }

            if(left<right) 
            {
                int length=right-left;
                int volume=length*altitude;

                if(volume>answer) 
                {
                    answer=volume;
                }
            }
            altitude++;
        }
        return answer;
    }
};
