class Solution {
public:
 void f(vector<int> nums,int n,vector<vector<int>> &v,vector<int> temp)
    {
        if(n==0)
        {
            sort(temp.begin(),temp.end());
            bool isPresent = find(v.begin(), v.end(), temp) != v.end();
            if(!isPresent){
                v.push_back(temp);           
            }
            return ;
        }

        f(nums,n-1,v,temp);

        temp.push_back(nums[n-1]);

        f(nums,n-1,v,temp);

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> v;
        vector<int> temp;
        f(nums,n,v,temp);
        // set<vector<int> > s;
        // for(int i=0;i<v.size();i++)
        // {
        //     s.insert(v[i]);
        // }
        // vector<vector<int>> ans;
        // for (auto it = s.begin();it != s.end();it++)
        // {
        //     ans.push_back(*it);
        // }
        return v;
    }
};
