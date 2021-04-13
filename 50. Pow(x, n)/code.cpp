class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        long long int y=n;
        if(y<0)
        {
            y=y*(-1);
        }
        while(y>0)
        {
            if(y%2==0)
            {
                x=x*x;
                y=y/2;
            }
            else{
                ans=ans*x;
                y--;
            }
        }
        if(n<0)
        {
            return (double)(1.0)/(double)ans;
        }
        return ans;
    }
};
