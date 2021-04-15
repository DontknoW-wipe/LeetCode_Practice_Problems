class Solution {
public:
    int ex(string s,int l,int r)
    {
        while(l>=0&&r<s.size()&&s[l]==s[r])
        {
            l--;
            r++;
        }
        return r-l-1;
    }
    string longestPalindrome(string s) {
        int size=s.size();
        int start=0,end=0;
        string res="";
        for(int i=0;i<size;i++)
        {
            int l1=ex(s,i,i);
            int l2=ex(s,i,i+1);
            int l=max(l1,l2);
            if(l>end-start)
            {
                start=i-(l-1)/2;
                end=i+(l/2);
            }
        }
        for(int i=start;i<=end;i++)
        {
            res+=s[i];
        }
        return res;
    }
};
