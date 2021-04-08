class Solution {
public:
    bool halvesAreAlike(string s) {
        int size=s.size();
        int mid=size/2;
        int c=0;
        for(int i=0;i<mid;i++)
        {
            if(s[i]=='a'||s[i]=='i'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='I'||
               s[i]=='E'||s[i]=='O'||s[i]=='U')
            {
                c++;
            }
        }
        for(int i=mid;i<size;i++)
        {
            if(s[i]=='a'||s[i]=='i'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='I'||
               s[i]=='E'||s[i]=='O'||s[i]=='U')
            {
                c--;
            }
        }
        if(c==0)
        {
            return true;
        }
       return false;
    }
};
