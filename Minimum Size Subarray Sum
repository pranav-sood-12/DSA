class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0,high=0;
        int curr_sum=nums[0];
        int ans=INT_MAX;
        while(low<nums.size() && high<nums.size())
        {
            if(curr_sum>=target)
            {
                ans=min(ans,high-low+1);
                curr_sum-=nums[low];
                low++;
            }
            if(curr_sum<target)
            {
                high++;
                if(high<nums.size())
                curr_sum+=nums[high];
            }
        }
        if(ans!=INT_MAX)
        return ans;

        return 0;
    }
};
