class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int c=0;
        sort(nums.begin(), nums.end());
        for(int i = 2; i < nums.size(); i++)
        {
            int low = 0, high = i - 1;
            while(low < high)
            {
                if(nums[low] + nums[high] > nums[i]){
                    c += high - low;
                    high--;
                }
                else
                {
                    low++;
                }
            }
        }
        return c;
    }
};
