class Solution {
public:

    int f(vector<int>& nums1, vector<int>& nums2,int n,int m,int res)
    {
        if(m==0 || n==0)
        return res;

        if(nums1[n-1]==nums2[m-1])
        {
            return f(nums1,nums2,n-1,m-1,res+1);
        }
     
        return max(res,max(f(nums1,nums2,n-1,m,0),f(nums1,nums2,n,m-1,0)));
    }

    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        
        // return f(nums1,nums2,n,m,0);

        int dp[n+1][m+1];

        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(i==0 || j==0)
                dp[i][j]=0;
            }
        }

        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(nums1[i-1]==nums2[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else
                dp[i][j]=0;
            }
        }

        int res=0;
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                res=max(res,dp[i][j]);
            }
        }

        return res;

    }
};
