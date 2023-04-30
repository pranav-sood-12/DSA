class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        unordered_map<int,int> m;
        
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]=i;
        }
        
        
        vector<int> col(mat[0].size(),INT_MIN);
        vector<int> row;
        
        int temp=INT_MIN;
        
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                col[j]=max(m[mat[i][j]],col[j]);
                temp=max(temp,m[mat[i][j]]);
            }
            row.push_back(temp);
            temp=INT_MIN;
        }
        
        
        
        for(int i=0;i<row.size();i++)
        {
            col.push_back(row[i]);
        }

        int ans=INT_MAX;
        for(int i=0;i<col.size();i++)
        {
            ans=min(ans,col[i]);
        }
        
        
        return ans;
        
    }
};
