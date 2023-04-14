class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool> m;
        int ans=1;
        if(nums.size()==0)
        return 0;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]=true;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(m.count(nums[i]-1)==1)
            m[nums[i]]=false;
        }

        for(int i=0;i<nums.size();i++)
        {
            if(m[nums[i]]==true)
            {
                int j=0,count=0;
                while(m.count(nums[i]+j)==1)
                {
                    count++;
                    j++;
                }
                ans=max(ans,count);
            }
        }

        return ans;
    }
};
