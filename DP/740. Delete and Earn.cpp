class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        unordered_map<int,int> umap;

        for(int i=0;i<nums.size();i++)
        {
            umap[nums[i]]++;
        }

        vector<int> v;

        for(auto u:umap)
        v.push_back(u.first);

        sort(v.begin(),v.end());

 
        vector<int> dp(v.size()+1,0);

        dp[0]=0;
        dp[1]=v[0]*umap[v[0]];
    
        for(int i=2;i<=v.size();i++)
        {
            if(v[i-1]-1==v[i-2])
            dp[i]=max((v[i-1]*umap[v[i-1]])+dp[i-2],dp[i-1]);
            else
            dp[i]=v[i-1]*umap[v[i-1]]+dp[i-1];

            cout<<dp[i]<<" ";
        }

        return dp[v.size()];
    }
};
