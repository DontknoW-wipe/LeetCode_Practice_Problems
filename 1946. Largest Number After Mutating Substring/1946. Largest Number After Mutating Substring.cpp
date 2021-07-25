class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        int size=num.size();
        int y=0;
        for(int i=0;i<size;i++)
        {
            int g=change[num[i]-'0'];
            int h=num[i]-'0';
             if(g<h&&y==1)
            {
                return num;
            }
            if(g>h)
            {
                num[i]=char('0'+g);
                y=1;
            }
           
        }
        return num;
    }
};
