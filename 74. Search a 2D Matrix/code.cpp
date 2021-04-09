class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int index=-1;
        for(int i=0;i<r;i++)
        {
            if(target==matrix[i][c-1])
            {
                return true;
            }
            if(target<matrix[i][c-1])
            {
                index=i;
                break;
            }
        }
        if(index==-1)
        {
            return false;
        }
        int start=0,end=c-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            cout<<mid<<endl;
            if(target==matrix[index][mid])
            {
                return true;
            }
            if(target<matrix[index][mid])
            {
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return false;
    }
};
