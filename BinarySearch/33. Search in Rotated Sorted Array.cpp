class Solution {
public:

    int binSearch(vector<int>& nums, int target,int low)
    {
        int l,h;
        if(low==0)
        {
            l=0;
            h=nums.size()-1;
        }
        else if(target>=nums[0])
        {
            l=0;
            h=low-1;
        }
        else
        {
            l=low;
            h=nums.size()-1;
        }
        
        while(l<=h)
        {
            int m=l+(h-l)/2;

            if(nums[m]==target)
            return m;

            if(nums[m]>=target)
            {
                h=m-1;
            }
            else
            l=m+1;
        }

        return -1;
        
    }

    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;

        while(low<high)
        {
            int mid=low+(high-low)/2;

            if(nums[mid]>nums[high])
            {
                low=mid+1;
            }
            else
            {
                high=mid;
            }
        }
        cout<<low;

        return binSearch(nums,target,low);
        // return high;
    }
};
