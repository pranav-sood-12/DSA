class Solution {
public:
    bool isValid(int n,int m,int i,int j,vector<vector<char>>& grid)
    {
        if(i>=0 && i<n && j>=0 && j<m && grid[i][j]=='1')
        return true;

        return false;
    }

    void dfs(int n,int m,int i,int j,vector<vector<char>>& grid)
    {
        // queue<pair<int,int>> q;
        // q.push({i,j});
        grid[i][j]='0';

        // while(!q.empty())
        // {
            
        // }

        if(isValid(n,m,i+1,j,grid))
        {
            dfs(n,m,i+1,j,grid);
        }
        if(isValid(n,m,i-1,j,grid))
        {
            dfs(n,m,i-1,j,grid);
        }
        if(isValid(n,m,i,j+1,grid))
        {
            dfs(n,m,i,j+1,grid);
        }
        if(isValid(n,m,i,j-1,grid))
        {
            dfs(n,m,i,j-1,grid);
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        // vector<vector<int>> visited(n,vector<int>(m,0));

        int count=0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                    dfs(n,m,i,j,grid);
                }
            }
        }

        return count;
    }
};
