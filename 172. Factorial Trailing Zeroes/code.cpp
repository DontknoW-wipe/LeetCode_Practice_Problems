class Solution {
public:
    int trailingZeroes(int n) {
        int c=0;
        while(n>0)
        {
            n/=5;
            c+=n;
            cout<<n<<endl;
        }
        return c;
    }
};
