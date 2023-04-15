class Solution {
    
public:
    
    int countDigits(int n)
    {
        int temp=n;
        if (n == 0)
        return 1;
        int count = 0;
        while (n != 0) {
            n = n / 10;
            ++count;
        }
        
        if(temp<0)
            count++;
        
        return count;
    }
    
    
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        vector<int> maxi(grid[0].size(),INT_MIN);
        vector<int> mini(grid[0].size(),INT_MAX);
        
        vector<int> ans;
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                maxi[j]=max(grid[i][j],maxi[j]);
                mini[j]=min(grid[i][j],mini[j]);
            }
        }
        
        for(int i=0;i<grid[0].size();i++)
        {
            int num1=countDigits(maxi[i]);
            int num2=countDigits(mini[i]);
            int num3=max(num1,num2);
            ans.push_back(num3);
        }
        
        return ans;
    }
};
