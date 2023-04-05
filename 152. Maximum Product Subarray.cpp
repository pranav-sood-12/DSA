class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int ans=0;
        // int pre_mul=1;
        // int temp1=1;
        // int temp=0;

        // for(int i=0;i<nums.size();i++)
        // {
        //     pre_mul=pre_mul*nums[i];

        //     temp1=temp1*nums[i];

        //     temp=temp1;

        //     if(temp<=0)
        //     {
        //         temp1=1;
        //         temp=0;
        //     }

        //     ans=max(ans,max(temp,pre_mul));
        // }
        // if(nums.size()==1)
        // return nums[0];
        // return ans;

        int maxProd = 1;
        int minProd = 1;
        int best=INT_MIN;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                swap(maxProd,minProd);
            }

            maxProd = max(maxProd*nums[i],nums[i]);
            minProd = min(minProd*nums[i],nums[i]);

            best = max(best, maxProd);

        }

        return best;
    }
};
