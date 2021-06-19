class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int first=0,second=0,target=0;
        for(int i=0;i<firstWord.size();i++)
        {
            int y=firstWord[i]-'a';
            first=(first*10)+(y);
        }
        for(int i=0;i<secondWord.size();i++)
        {
            int y=secondWord[i]-'a';
            second=(second*10)+(y);
        }
        for(int i=0;i<targetWord.size();i++)
        {
            int y=targetWord[i]-'a';
            target=(target*10)+(y);
        }
        if((first+second)==target)
        {
            return true;
        }
        return false;
    }
};
