class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ::iterator it,it1;
        for(it=nums.begin();it!=nums.end();)
        {
            int y=*it;
            if(y==val)
            {
                it1=it;
                nums.erase(it);
            }
            else{
                it++;
            }
        }
        return nums.size();
    }
    
};
