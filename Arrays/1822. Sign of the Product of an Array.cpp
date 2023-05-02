class Solution {
public:
    int arraySign(vector<int>& nums) {
        int pos=0,neg=0,zero=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            neg++;
            else if(nums[i]>0)
            pos++;
            else
            zero++;
        }

        if(zero>0)
        return 0;

        // if(pos>neg)
        // return 1;
        
        // if(neg>pos)
        // {
        //     if(neg%2==0)
        //     return 1;
        //     else
        //     return -1;
        // }

        if(neg%2==0)
        return 1;
        else if(neg%2!=0)
        return -1;

        return 0;
    }
};
