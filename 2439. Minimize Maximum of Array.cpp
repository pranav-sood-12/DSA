class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        double avg=0,maxi=0;
        long long sum=0;
        for(int i=0;i<nums.size();i++)
        {
            // if(nums[i]>nums[i-1])
            // {
            //     int diff = nums[i]-nums[i-1];
            //     nums[i-1]+=diff/2;
            //     nums[i]-=diff/2;
            // }
            sum+=nums[i];

            avg=ceil((double)sum/(i+1));
            cout<<avg<<endl;
            
            maxi=max(maxi,avg);

        }
        // cout<<ceil(1.5);

        // for(int i=0;i<nums.size();i++)
        // {
        //     ans=max(ans,nums[i]);
        // }

        return maxi;

    }
};
