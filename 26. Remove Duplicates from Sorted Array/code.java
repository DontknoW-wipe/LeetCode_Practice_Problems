class Solution {
    public int removeDuplicates(int[] nums) {
        
        int size=nums.length;
        if(size==0||size==1)
        {
            return size;
        }
        int y=nums[0];
        int j=0;
        for(int i=0;i<size;i++)
        {
            if(j==0)
            {
                j++;
                continue;
            }
            else{
                if(y!=nums[i])
                {
                    nums[j]=nums[i];
                    y=nums[i];
                    j++;
                }
            }
        }
        return j;
    }
}
