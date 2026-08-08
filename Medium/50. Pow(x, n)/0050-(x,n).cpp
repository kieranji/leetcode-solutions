class Solution {
public:
    double myPow(double x, int n) 
    {
        if(x==1)
        {
            return 1;
        }
        double output=1.0;
        if(n>0)
        {
            while(n>1)
            {
                if(n%2==0)
                {
                    x*=x;
                    n/=2;
                }     
                else
                {
                    output*=x;
                    x*=x;
                    n/=2;
                }       
            }
            return output*x; 
        }
        else if(n==0)
        {
            return 1.0;
        }
        else
        {
            while(n<-1)
            {
                if(n%2==0)
                {
                    x*=x;
                    n/=2;
                }     
                else
                {
                    output/=x;
                    x*=x;
                    n/=2;
                }       
            }
            return output/x; 
        }  
        
    }
};
