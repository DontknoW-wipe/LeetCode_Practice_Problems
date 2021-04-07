class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int min_v=INT_MAX,max_v=INT_MIN;
        for(int i=0;i<A.size();i++)
        {
            if(min_v>A[i])
            {
                min_v=A[i];
            }
            if(max_v<A[i])
            {
                max_v=A[i];
            }
        }
        return max(0,max_v-min_v-2*K);
        
    }
};
