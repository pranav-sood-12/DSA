class Solution {
public:
    int numberOfGoodSubarraySplits(vector<int>& nums) {
        long long mod = 1000000007;
        long long count = 0,ans=1;
        int i=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            break;
        }

        if(i >= nums.size() ) return 0;

        while(i<nums.size())
        {
            if(nums[i]==1)
            {
                // count = count % mod;
                ans = (ans * (count+1))%mod; 
                // ans=ans % mod;
                // cout<<ans;
                count=0;
            }
            else
            count++;
            i++;
        }

        return ans;
    }
};
