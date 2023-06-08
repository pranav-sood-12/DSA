#define mod 1000000007
class Solution {
public:



    int f(int zero, int one,int len)
    {
        if(len<0)
        return 0;
        // int ans=0;

        if(len==0)
        return 1;

        long long sum = (f(zero,one,len-zero)+f(zero,one,len-one))%mod;

        return sum;
    }

    int memf(int zero, int one,int len,vector<int> &dp)
    {
        if(len<0)
        return 0;
        // int ans=0;
        

        if(len==0)
        return 1;

        if(dp[len]!=-1)
        return dp[len];

        long long sum = (memf(zero,one,len-zero,dp)+memf(zero,one,len-one,dp))%mod;

        return dp[len]=sum;
    }


    int countGoodStrings(int low, int high, int zero, int one) {
        int ans=0;
        vector<int> dp(high+1,-1);
        for(int i=low;i<=high;i++)
        {
            ans = (ans+memf(zero,one,i,dp))%mod;
        }

        return ans;
    }
};
