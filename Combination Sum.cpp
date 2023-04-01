#include<bits/stdc++.h>
class Solution {
public:

    void f(vector<int> candidates,vector<vector<int>> &ans,vector<int> temp,int target,int n)
    {
        if(n==0)
        return ;
        
        if(target==0)
        {
            ans.push_back(temp);
            return ;
        }
      
        

        if(candidates[n-1]<=target)
        {
            temp.push_back(candidates[n-1]);

            f(candidates,ans,temp,target-candidates[n-1],n);
            temp.pop_back();
            // f(candidates,ans,temp,target,n-1);
        }
        
        f(candidates,ans,temp,target,n-1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n=candidates.size();
        f(candidates,ans,temp,target,n);

        return ans;
    }
};
