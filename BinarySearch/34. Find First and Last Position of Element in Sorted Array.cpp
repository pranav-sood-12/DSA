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

    vector<int> searchRange(vector<int>& nums, int target) {
        int x=firstOccurance(nums,target);
        int y=lastOccurance(nums,target);

        return {x,y};
    }
};
