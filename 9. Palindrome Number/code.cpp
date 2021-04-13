class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        int y=x;
        long long int sum=0;
        while(y>0)
        {
            sum=sum*10+(y%10);
            y/=10;
        }
        cout<<sum<<endl;
        if(x==sum)
        {
            return true;
        }
        return false;
    }
};
