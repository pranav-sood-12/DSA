class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int pre_sum=0;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            pre_sum+=nums[i];
            if(pre_sum==k)
            ans++;
            if(m.find(pre_sum-k)!=m.end())
            {
                ans+=m[pre_sum-k];
            }   
            m[pre_sum]++;
            
        }

        return ans;
    }
};
