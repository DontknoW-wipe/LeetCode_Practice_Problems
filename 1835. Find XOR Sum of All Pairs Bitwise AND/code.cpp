class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        int a1=arr1[0],a2=arr2[0];
        for(int i=1;i<arr1.size();i++)
        {
            a1^=arr1[i];
        }
        for(int i=1;i<arr2.size();i++)
        {
            a2^=arr2[i];
        }
        return a1&a2;
    }
};
