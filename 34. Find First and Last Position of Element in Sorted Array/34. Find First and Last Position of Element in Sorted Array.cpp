class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        res.push_back(-1);
        res.push_back(-1);
        int start=0,end=nums.size()-1;
        int index=-1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(nums[mid]==target)
            {
                index=mid;
                break;
            }
            if(nums[mid]>target)
            {
                end=mid-1;
            }
            if(nums[mid]<target)
            {
                start=mid+1;
            }
            
        }
        cout<<index<<endl;
        if(index==-1)
        {
            return res;
        }
        for(int i=index;i>=0;i--)
        {
            if(nums[i]==target)
            {
                res[0]=i;
            }
            else{
                break;
            }
        }
        for(int i=index;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                res[1]=i;
            }
            else{
                break;
            }
        }
        return res;
    }
};
