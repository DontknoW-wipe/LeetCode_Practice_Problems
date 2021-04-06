class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ::iterator it;
        if(nums.size()==0||nums.size()==1)
        {
            return nums.size();
        }
        int y=nums[0];
        int i=0;
        for(it=nums.begin();it!=nums.end();it++)
        {
            if(i==0)
            {
                i++;
                continue;
            }
            else
            {
                if(y!=(*it))
                {
                    y=*it;
                    nums[i]=y;
                    i++;
                }
            }
        }
        int df=nums.size()-i;
        for(int i=0;i<df;i++)
        {
            nums.pop_back();
        }
        return i;
    }
};
