class Solution {
public:

    int f(vector<int> nums,int n)
    {
        if(n<=0)
        return 0;

        return max(nums[n-1]+f(nums,n-2),f(nums,n-1));
    }

    int rob(vector<int>& nums) {
        int n=nums.size();

        // return f(nums,n);

        int dp[n+1];

        dp[0]=0;
        dp[1]=nums[0];

        for(int i=2;i<n+1;i++)
        {
            dp[i]=max(nums[i-1]+dp[i-2],dp[i-1]);
        }

        return dp[n];
    }
};
