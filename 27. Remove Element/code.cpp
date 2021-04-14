class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size=nums.size();
        int i,j;
        for(i=0,j=0;j<size;j++)
        {
            if(nums[j]!=val)
            {
                nums[i]=nums[j];
                i++;
            }
        }
        return i;
    }
    
};
