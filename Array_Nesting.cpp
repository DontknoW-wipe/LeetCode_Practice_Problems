/*https://leetcode.com/explore/challenge/card/september-leetcoding-challenge-2021/636/week-1-september-1st-september-7th/3960/*/

class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int res=0;
        int index;
        int a[100001]={0};
        for(int i=0;i<nums.size();i++)
        {
            index=i;
            int res1=0;
            while(true)
            {
                if(a[index]==0)
                {
                    res1++;
                    a[index]++;
                    index=nums[index];
                }
                else{
                    break;
                }
            }
            res=max(res,res1);
        }
        return res;
    }
};
