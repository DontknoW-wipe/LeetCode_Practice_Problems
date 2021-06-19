class Solution {
public:
    int secondHighest(string s) {
        int maxE1=-1,maxE2=-1;
        int size=s.size();
        for(int i=0;i<size;i++)
        {
            if(s[i]>='0'&&s[i]<='9')
            {
                int u=s[i]-'0';
                if(u>maxE1)
                {
                    maxE1=u;
                }
            }
        }
        for(int i=0;i<size;i++)
        {
            if(s[i]>='0'&&s[i]<='9')
            {
                int u=s[i]-'0';
                if(u!=maxE1)
                {
                    if(u>maxE2)
                    {
                        maxE2=u;
                    }
                }
            }
        }
        return maxE2;
    }
};
