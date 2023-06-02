class Solution {
public:
    
    int top(vector<vector<int>>& grid,int i,int j)
    {
        unordered_set<int> s1;
        i--;j--;
        while(i>=0 && j>=0)
        {
            s1.insert(grid[i][j]);
            i--;j--;

        }
        
        return s1.size();
    }
    
    int bottom(vector<vector<int>>& grid,int i,int j,int m,int n)
    {
        unordered_set <int> s2;
        i++;j++;
        while(i<m && j<n)
        {
            s2.insert(grid[i][j]);
            i++;j++;
        }
        return s2.size();
    }
    
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
        
        vector<vector<int>> ans;
        
        for(int i=0;i<grid.size();i++)
        {
            vector<int> temp;

            for(int j=0;j<grid[0].size();j++)
            {
                int x=top(grid,i,j);
                int y=bottom(grid,i,j,grid.size(),grid[0].size());
                temp.push_back(abs(x-y));
            }
            ans.push_back(temp);
        }
        
        return ans;
    }
};
