class Solution {
public:
    string reverseWords(string s) {
        string res="";
        int size=s.size();
        string g="";
        for(int i=0;i<size;i++)
        {
            if(s[i]!=' ')
            {
                g=g+s[i];
            }else{
                
                if(g.size()>0)
                {
                    if(res.size()>0)
                    {
                        res=' '+res;
                        res=g+res;
                        g="";
                    }
                    else{
                        res=g+res;
                        g="";
                    }
                }
            }
        }
        if(g.size()>0&&res.size()>0)
        {
            res=' '+res;
            res=g+res;
            g="";
        }
        else{
            res=g+res;
            g="";
        }
        return res;
    }
};
