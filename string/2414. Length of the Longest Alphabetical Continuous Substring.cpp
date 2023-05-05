class Solution {
public:
    int longestContinuousSubstring(string s) {
 


        long long count=1;
        long long ans=1;
        

        for(long long i=1;i<s.size();i++)
        {
            long long temp1=s[i-1];
            long long temp2=s[i];
    

            if(temp2-temp1==1)
            {
                count++;
            }
            else
            {
                ans=max(ans,count);
                count=1;
            }
        }
        ans=max(ans,count);

        return ans;

    }
};
