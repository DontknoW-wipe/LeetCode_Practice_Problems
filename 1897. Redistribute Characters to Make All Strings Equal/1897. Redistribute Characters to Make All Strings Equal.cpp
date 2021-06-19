class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int a[26]={0};
        for(int i=0;i<words.size();i++)
        {
            int size=words[i].size();
            for(int j=0;j<size;j++)
            {
                a[words[i][j]-'a']++;
            }
        }
        
        for(int i=0;i<26;i++)
        {
            if(a[i]%words.size()>0)
            {
                return false;
            }
        }

        return true;
    }
};
