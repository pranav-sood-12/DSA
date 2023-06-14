# define mod 1000000007
class Solution {
public:
    
    int sumDistance(vector<int>& nums, string s, int d) {
        for(int i=0;i<nums.size();i++)
        {
            if(s[i]=='R')
                nums[i]+=d;
            else
                nums[i]-=d;
        }
        
        sort(nums.begin(),nums.end());
        
        long long pref=0;
        long long ans=0;
        
        for(int i=0;i<nums.size();i++)
        {
            ans+=(i*(long long)nums[i]-pref);
            ans %= mod;
            pref+=nums[i];
        }
        
        
        return ans;
        
    }
};
