class Solution {
public:
    
    int canBeTypedWords(string text, string brokenLetters) {
        int a[26]={0};
        for(int i=0;i<brokenLetters.size();i++)
        {
            a[brokenLetters[i]-'a']++;
        }

        int res=0,y=0,y1=0;
        for(int i=0;i<text.size();i++)
        {
            if(text[i]!=' ')
            {
                if(a[text[i]-'a']>0)
                {
                    y=1;
                }
            }
           if(text[i]==' ')
           {
               y1++;
               if(y==1)
               {
                   res++;
               }
               y=0;
           }
            if(i==text.size()-1)
            {
                y1++;
                if(y==1)
                {
                    res++;
                }
                y=0;
            }
        }
        return y1-res;
    }
};
