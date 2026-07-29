class Solution {
public:
    int divide(int dividend, int divisor) 
    {
        if(dividend==INT_MIN&&divisor == -1) 
        {
            return INT_MAX;
        }

        bool negative=(dividend<0)!=(divisor<0);

        long long a=llabs((long long)dividend);
        long long b=llabs((long long)divisor);

        long long result=0;

        for(int i=31;i>=0;i--) 
        {
            if((a >> i)>=b) 
            {
                a-=b<<i;
                result+=1LL<<i;
            }
        }
        if(negative) 
        {
            result=-result;
        }
        return (int)result;
    }
};
