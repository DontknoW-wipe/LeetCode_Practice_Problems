class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int a[26]={0};
        for(int i=0;i<s.size();i++)
        {
            a[s[i]-'a']++;
        }
        int t=-1;
        for(int i=0;i<26;i++)
        {
            if(a[i]>0)
            {
                t=a[i];
                break;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(a[i]>0&&a[i]!=t)
            {
                return false;
            }
        }
        return true;
    }
};
