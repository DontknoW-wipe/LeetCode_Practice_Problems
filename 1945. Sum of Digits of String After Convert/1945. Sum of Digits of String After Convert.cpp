class Solution {
public:
    int getLucky(string s, int k) {
        string s1="";
        for(int i=0;i<s.size();i++)
        {
            int u=s[i]-'a';
            u++;
            s1+=to_string(u);
        }
        int y=-1;
        while(k--)
        {
            long long int r=0;
            for(int i=0;i<s1.size();i++)
            {
                r+=(s1[i]-'0');
            }
            // cout<<r<<endl;
            y=r;
            s1=to_string(r);
        }
        return y;
    }
};
