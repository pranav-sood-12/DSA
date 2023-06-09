class Solution {
public:

    int f(vector<vector<int>>& grid,int n,int m,int i,int j,vector<vector<int>> dp)
    {
        if(i>=n || j>=m)
        return INT_MAX;
        if(i==n-1 && j==m-1)
        return grid[i][j];

        if(dp[i][j]!=-1)
        return dp[i][j];

        // int down = grid[i][j] + f(grid,n,m,i+1,j);
        // int right = grid[i][j] + f(grid,n,m,i,j+1);

        return dp[i][j] = grid[i][j]+min(f(grid,n,m,i+1,j,dp),f(grid,n,m,i,j+1,dp));
    }

    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        // return f(grid,n,m,0,0,dp);


    for(int j=1;j<m;j++)
     {
      grid[0][j]=grid[0][j-1]+grid[0][j];
     }
     //initialize 1st row
     for(int i=1;i<n;i++)
     {
      grid[i][0]=grid[i-1][0]+grid[i][0];
     }
     for(int i=1;i<n;i++)
     {
       for(int j=1;j<m;j++)
       {
         grid[i][j]+=min(grid[i-1][j],grid[i][j-1]);
         //find minimum of top and left block cost
       }
     }
     return grid[n-1][m-1];
    }
};
