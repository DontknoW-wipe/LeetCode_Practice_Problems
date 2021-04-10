class Solution {
public:
    bool detectCapitalUse(string word) {
        int size=word.size();
        int c=0;
        for(int i=0;i<size;i++)
        {
            if(word[i]>='A'&&word[i]<='Z')
            {
                c++;
            }
        }
        if(c==0)
        {
            return true;
        }
        if(c==size)
        {
            return true;
        }
        if(c==1&&word[0]>='A'&&word[0]<='Z')
        {
            return true;
        }
        return false;
    }
};
