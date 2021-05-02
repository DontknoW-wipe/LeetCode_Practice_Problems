class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int maxE=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                maxE=min(maxE,abs(i-start));
            }
        }
        return maxE;
    }
};
