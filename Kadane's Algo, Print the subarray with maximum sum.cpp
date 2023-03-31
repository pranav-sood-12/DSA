class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,res=INT_MIN;
        int start=0;
        int ansStart=0,ansEnd=0;
        for(int i=0;i<nums.size();i++)
        {
            if(sum==0)
            start=i;
            sum+=nums[i];
            if(sum>res){
                res=sum;
                ansStart=start;
                ansEnd=i;
            }

            if(sum<0)
                sum=0;
        }

        cout<<ansStart<<" "<<ansEnd<<endl;
        return res;
    }
};
