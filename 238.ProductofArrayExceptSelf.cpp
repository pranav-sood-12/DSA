class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums.size());
        vector <int> right(nums.size());
        left[0]=1;
        int temp=1;
        for(int i=1;i<nums.size();i++)
        {
            temp = temp*nums[i-1];
            // cout<<temp<<endl;
            left[i]=temp;
        }
        right[nums.size()-1]=1;
       
        temp=1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            temp =temp*nums[i+1];
            right[i]=temp;
            
        }
        

        vector<int> ans;

        for(int i=0;i<nums.size();i++)
        {
            // cout<<left[i]<<" "<<right[i]<<endl;
            ans.push_back(left[i]*right[i]);
        }

        return ans;
    }
};
