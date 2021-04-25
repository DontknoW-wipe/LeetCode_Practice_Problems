class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int pp=0,c=1;
        int l=1,maxE=0;
        while(pp<word.size()-1)
        {
            if(word[pp]==word[pp+1])
            {
                l++;
            }
            else if(word[pp]<word[pp+1])
            {
                l++;
                c++;
            }
            else{
                l=1;
                c=1;
            }
            if(c==5)
            {
                maxE=max(maxE,l);
            }
            pp++;
        }
        return maxE;
    }
};
