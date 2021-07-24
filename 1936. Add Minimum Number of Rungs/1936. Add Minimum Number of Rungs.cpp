class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int y=rungs[0];
        int res=0,r1,r2;
        r1=y/dist;
        r2=y%dist;
        if(!r2&&r1>0)
        {
            r1--;
        }
        res+=r1;
        for(int i=0;i<rungs.size()-1;i++)
        {
            y=rungs[i+1]-rungs[i];
            r1=y/dist;
            r2=y%dist;
            if(!r2&&r1>0)
            {
                r1--;
            }
            res+=r1;
        }
        return res;
    }
};
