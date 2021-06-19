class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int size1=allowed.size(),size2=words.size();
        int a[26]={0};
        for(int i=0;i<size1;i++)
        {
            a[allowed[i]-'a']++;
        }
        int b[26]={0};
        int c=0;
        for(int i=0;i<size2;i++)
        {
            for(int j=0;j<words[i].size();j++)
            {
                b[words[i][j]-'a']++;
            }
            int p=0;
            for(int j=0;j<26;j++)
            {
                if(b[j]>0&&a[j]==0)
                {
                    p=1;
                }
                b[j]=0;
            }
            if(p==0)
            {
                c++;
            }
        }
        return c;
    }
};
