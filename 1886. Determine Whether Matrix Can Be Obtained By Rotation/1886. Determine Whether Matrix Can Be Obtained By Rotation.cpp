class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
        vector<vector<int>> oops;
        // for(int i=0;i<n;i++)
        // {
        //         for(int j=0;j<n;j++)
        //         {
        //             cout<<target[i][j]<<" ";
        //         }
        //         cout<<endl;
        //  }
        // cout<<"trans"<<endl;
        for(int o=0;o<4;o++)
        {
            for(int i=0;i<n;i++)
            {
                vector<int> v;
                for(int j=n-1;j>=0;j--)
                {
                    v.push_back(mat[j][i]);
                }
                 oops.push_back(v);
                v.clear();
            }
            cout<<endl;

            int c=0;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    mat[i][j]=oops[i][j];
                    // cout<<mat[i][j]<<" ";
                    if(mat[i][j]==target[i][j])
                    {
                        c++;
                    }
                }
                // cout<<endl;
            }
            cout<<endl;
            oops.clear();
            if(c==(n*n))
            {
                return true;
            }
        }
        return false;
    }
};
