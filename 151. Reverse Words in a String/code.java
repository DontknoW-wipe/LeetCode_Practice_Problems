class Solution {
    public String reverseWords(String s) {
        int size=s.length();
        String g="",res="";
        for(int i=0;i<size;i++)
        {
            if(s.charAt(i)!=' ')
            {
                g+=s.charAt(i);
            }
            else{
                if(g.length()>0)
                {
                    if(res.length()>0)
                    {
                        res=' '+res;
                        res=g+res;
                    }
                    else{
                        res=g+res;
                    }
                    g="";
                }
            }
        }
        if(g.length()>0)
        {
            if(res.length()>0)
            {
                res=' '+res;
                res=g+res;
            }
            else{
                res=g+res;
            }
            g="";
        }
        return res;
    }
}
