class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        cost.push_back(0);

        int dp[cost.size()+1];
        dp[0]=cost[0];// 0 -- 1
        dp[1]=cost[1];// 1 -- 100
        for(int i=2;i<cost.size();i++)
        {
            dp[i]= cost[i] + min(dp[i-1],dp[i-2]);
            // cout<<cost[i]<<" ";
        }

        return dp[cost.size()-1];
        // return 1;

        // 1 -- 10
        // 2 -- 15
        // 3 -- 30


        // 2 -- 2
        // 3 -- 3
        // 4 -- 3
        // 5 -- 103
        // 6 -- 4
        // 7 -- 5
        // 8 -- 104
        // 9 -- 6
    }
};
