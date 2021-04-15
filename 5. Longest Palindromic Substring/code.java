class Solution {
     public int ex(String s,int l,int r)
    {
        while(l>=0&&r<s.length()&&s.charAt(l)==s.charAt(r))
        {
            l--;
            r++;
        }
        return r-l-1;
    }
    public String longestPalindrome(String s) {
   
        int size=s.length();
        int start=0,end=0;
        String res="";
        for(int i=0;i<size;i++)
        {
            int l1=ex(s,i,i);
            int l2=ex(s,i,i+1);
            int l;
            if(l1>l2)
            {
                l=l1;
            }
            else{
                l=l2;
            }
            if(l>end-start)
            {
                start=i-(l-1)/2;
                end=i+(l/2);
            }
        }
        for(int i=start;i<=end;i++)
        {
            res+=s.charAt(i);
        }
        return res;
    }
}class Solution {
     public int ex(String s,int l,int r)
    {
        while(l>=0&&r<s.length()&&s.charAt(l)==s.charAt(r))
        {
            l--;
            r++;
        }
        return r-l-1;
    }
    public String longestPalindrome(String s) {
   
        int size=s.length();
        int start=0,end=0;
        String res="";
        for(int i=0;i<size;i++)
        {
            int l1=ex(s,i,i);
            int l2=ex(s,i,i+1);
            int l;
            if(l1>l2)
            {
                l=l1;
            }
            else{
                l=l2;
            }
            if(l>end-start)
            {
                start=i-(l-1)/2;
                end=i+(l/2);
            }
        }
        for(int i=start;i<=end;i++)
        {
            res+=s.charAt(i);
        }
        return res;
    }
}
