class Solution {
public:
    int uniquePaths(int m, int n) 
    {
        int total=m+n-2;
        int pin=min(m-1,n-1);
        long long result=1;
        for(int i=1;i<=pin;i++)
        {
            result=result*(total-pin+i)/i;
        }
        return result;
    }
};
