class Solution {
public:

    void f(vector<int> nums,int n,vector<vector<int>> &v,vector<int> temp)
    {
        
        
        if(n==0)
        {v.push_back(temp);
        return ;
        }

        f(nums,n-1,v,temp);

        temp.push_back(nums[n-1]);

        f(nums,n-1,v,temp);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> v;
        vector<int> temp;
        f(nums,n,v,temp);
        return v;
    }
};
