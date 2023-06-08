class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;

        int j=grid[0].size()-1;
        int i=0;

        while(i<grid.size() && j>=0)
        {
            if(grid[i][j]>=0)
            {
                i++;
                count+=(grid[0].size()-j-1);
            }
            else if(grid[i][j]<0)
            {
                j--;
                
            }

            if(j==-1)
            {
                count+=(grid[0].size())*(grid.size()-i);
            }
        }

        return count;
    }
};
