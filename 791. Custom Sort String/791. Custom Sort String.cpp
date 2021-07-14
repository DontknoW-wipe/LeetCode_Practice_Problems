class Solution {
public:
    string customSortString(string order, string str) {
        string res="";
        for(int i=0;i<order.size();i++)
        {
            for(int j=0;j<str.size();j++)
            {
                if(str[j]==order[i])
                {
                    res+=order[i];
                    str[j]='1';
                }
            }
        }
        for(int i=0;i<str.size();i++)
        {
            if(str[i]!='1')
            {
                res+=str[i];
            }
        }
        cout<<str<<endl;
        return res;
    }
};
