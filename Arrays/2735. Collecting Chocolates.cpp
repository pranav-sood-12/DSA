class Solution {
public:
    long long minCost(vector<int>& nums, int x) {
        vector<int> checked(nums.size(),INT_MAX);
        
        vector<int> chocoNum;
        chocoNum=nums;
        for(auto n : nums)
            chocoNum.push_back(n);
        
        long long ans=LONG_MAX;
        
        for(int rot=0;rot<nums.size();rot++)
        {
            long long sum = 0;
            for(int j=0;j<nums.size();j++)
            {
                if(checked[j]>chocoNum[j+rot])
                    checked[j]=chocoNum[j+rot];
                
                sum+=checked[j];
            }
            
            sum+=(long long)rot*(long long)x;
            
            ans=min(ans,sum);
        }
        
        return ans;
        
    }
};
