class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int maxi=INT_MIN;
        
        long long sum=0;
        
        vector<long long> ans(nums.size());
        
        for(int i=0;i<nums.size();i++)
        {
            maxi=max(maxi,nums[i]);
            
            sum+=nums[i]+maxi;
            
            ans[i]=sum;
        }
        
        return ans;
    }
};
