class Solution {
public:
    bool checkIfPangram(string sentence) {
        int a[26]={0};
        for(int i=0;i<sentence.size();i++)
        {
            int up=sentence[i]-'a';
            a[up]++;
        }
        for(int i=0;i<26;i++)
        {
            if(a[i]==0)
            {
                return false;
            }
        }
        return true;
    }
};
