class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int sum=0;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size()-1;i++)
        {
            sum=nums[i]+nums[i+1];
            if(m.find(sum)!=m.end())
            {
                return true;
            }
            m[sum]++;
        }
        return false;
    }
};
