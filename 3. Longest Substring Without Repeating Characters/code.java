class Solution {
    public int max(int a,int b)
    {
        if(a>b)
        {
            return a;
        }
        return b;
    }
    public int lengthOfLongestSubstring(String s) {
        int size=s.length();
        int maxE=0;
        int a[]=new int[256];
        for(int i=0;i<=255;i++) a[i]=0;
        for(int i=0,j=0;j<size;j++)
        {
            int h=s.charAt(j);
            if(a[h]!=0)
            {
                i=max(a[h],i);
            }
            maxE=max(maxE,j-i+1);
            a[h]=j+1;
            // cout<<maxE<<endl;
        }
        
        return maxE;
    }
}
