class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size=s.size();
        int maxE=0;
        int a[255]={0};
        for(int i=0,j=0;j<size;j++)
        {
            int h=s[j];
            if(a[h])
            {
                i=max(a[h],i);
            }
            maxE=max(maxE,j-i+1);
            a[h]=j+1;
            // cout<<maxE<<endl;
        }
        
        return maxE;
    }
};
