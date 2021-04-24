class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int res=0;
        if(timeSeries.size()==0) return 0;
        for(int i=0;i<timeSeries.size()-1;i++)
        {
            int diff=timeSeries[i+1]-timeSeries[i];
            res+=(min(diff,duration));
        }
        return (res+duration);
    }
};
