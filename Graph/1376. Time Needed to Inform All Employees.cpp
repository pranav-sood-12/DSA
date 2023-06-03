class Solution {
public:
    unordered_map<int,vector<int>> umap;
    int ans=0,mx=0;
    

    void dfs(int manager,vector<int>& informTime)
    {
        mx=max(mx,ans);
        for(auto employee : umap[manager])
        {
            ans+=informTime[manager];

            dfs(employee,informTime);

            ans-=informTime[manager];
        }
        
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        
        for(int i=0;i<n;i++)
        {
            if(manager[i]!=-1)
            {
                umap[manager[i]].push_back(i);
            }
        }

        dfs(headID,informTime);

        return mx;
        
    }
};
