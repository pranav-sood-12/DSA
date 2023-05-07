class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> prefix;
        vector<int> suffix;
        
        unordered_set<int> s1;
        
        for(int i=0;i<nums.size();i++)
        {
            
            
                if (!s1.count(nums[i]))  
                {
                    s1.insert(nums[i]);
                    
                }
            prefix.push_back(s1.size());
                
            
        }
        
        unordered_set<int> s2;
        
        for(int i=nums.size()-1;i>=0;i--)
        {
            
            
                if (!s2.count(nums[i]))  
                {
                    s2.insert(nums[i]);
                    suffix.push_back(s2.size()-1);
                }
            else
                suffix.push_back(s2.size());
            
        }
        reverse(suffix.begin(),suffix.end());
        
        vector<int> ans;
        
        for(int i=0;i<suffix.size();i++)
        {
            ans.push_back(prefix[i]-suffix[i]);
            // cout<<prefix[i]<<" "<<suffix[i]<<endl;
        }
        
        return ans;
    }
};
