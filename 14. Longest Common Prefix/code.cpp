class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string res="";
        for(int i=0;i<strs[0].size();i++)
        {
            int g=0;
            for(int j=0;j<strs.size();j++)
            {
                if(strs[j][i]==strs[0][i])
                {
                    g++;
                }
            }
            if(g==strs.size())
            {
                res+=strs[0][i];
            }
            else{
                return res;
            }
        }
        return strs[0];
    }
};
