class Solution {
public:
    int lengthOfLastWord(string s) {
        int size=s.size();
        string s1="";
        int res=0;
        for(int i=0;i<size;i++)
        {
            if(s[i]!=' ')
            {
                s1+=s[i];
            }
            else if(s1.size()>0)
            {
                res=s1.size();
                s1="";
            }
        }
        if(s1.size()>0)
        {
            res=s1.size();
            s1="";
        }
        return res;
    }
};
