class Solution {
    public int countPrimes(int n) {
        if(n<2)
        {
            return 0;
        }
        boolean prime[]=new boolean[n+1];
        for(int i=0;i<n+1;i++)
        {
            prime[i]=true;
        }
        for(int i=2;i*i<n;i++)
        {
            if(prime[i]==true)
            {
                for(int k=i*i;k<=n;k=k+i)
                {
                    prime[k]=false;
                }
            }
        }
        int res=0;
        for(int i=n-1;i>=2;i--)
        {
            if(prime[i])
            {
                res++;
            }
        }
        return res;
    }
}
