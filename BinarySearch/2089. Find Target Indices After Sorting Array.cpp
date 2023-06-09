class Solution {
public:
    int lastOccurance(vector<int>& nums, int target)
    {
        int end=nums.size()-1;
        int start=0;
        int res=-1;
        while(start<=end)
        {
            int mid = start + (end-start)/2;

            if(nums[mid]==target)
            {
                res=mid;
                start=mid+1;
            }
            else if(nums[mid]<target)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }

        return res;
    }


    int firstOccurance(vector<int>& nums, int target)
    {
        int end=nums.size()-1;
        int start=0;
        int res=-1;
        while(start<=end)
        {
            int mid = start + (end-start)/2;

            if(nums[mid]==target)
            {
                res=mid;
                end=mid-1;
            }
            else if(nums[mid]<target)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }

        return res;
    }

    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int x=firstOccurance(nums,target);
        int y=lastOccurance(nums,target);

        vector<int> ans;

        if(x==-1)
        return ans;

        for(int i=x;i<=y;i++)
        ans.push_back(i);


        return ans;
    }
};
