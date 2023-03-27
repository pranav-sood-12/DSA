class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        bool zero=false;
        while(i<nums.size()-1 && j<nums.size())
        {
            if(nums[j]==0 && zero==false){
                zero=true;
                i=j;
            }

            if(nums[j]!=0 && zero==true)
            {
                swap(nums[i],nums[j]);
                if(nums[i+1]!=0)
                i=j;
                else
                i++;
            }
            j++;
        }
    }
};
