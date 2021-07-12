class Solution {
public:
    bool isIsomorphic(string s, string t) {
       
        vector<int> a[255],b[255];
        for(int i=0;i<s.size();i++)
        {
            int y1=s[i],y2=t[i];
            int s1=a[y1].size(),s2=b[y2].size();
            if(s1>0&&s2==0)
            {
                return false;
            }
            else if(s1==0&&s2>0)
            {
                return false;
            }
            else if(s1>0&&s2>0)
            {
                if(a[y1][s1-1]!=b[y2][s2-1])
                {
                    return false;
                }
                
            }
                a[y1].push_back(i);
                b[y2].push_back(i);
           
            
        }
       
        return true;
    }
};
