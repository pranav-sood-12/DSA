#include <bits/stdc++.h> 
vector<int> findSubmatrixSum(vector<vector<int>> &arr, vector<vector<int>> &queries) 
{
    // Write your code here
    
    int sum=0;
    vector<int> ans;
    
    int n = arr.size();
    int m = arr[0].size();

    int dp[n][m];
    int p=0,q=0;
    for(int i=0;i<arr.size();i++)
    {
        p+=arr[i][0];
        dp[i][0]=p;
    }

    for(int j=0;j<arr[0].size();j++)
    {
        q+=arr[0][j];
        dp[0][j]=q;
    }

    for(int i=1;i<arr.size();i++)
    {
        for (int j = 1; j < arr[0].size(); j++) 
        {
            dp[i][j]=arr[i][j]+dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
                    // cout<<"================================"<<endl;

        }
        // cout<<"hello"<<endl;
    }


    // for(int i=0;i<arr.size();i++)
    // {
    //     for (int j = 0; j < arr[0].size(); j++) 
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int r1,c1,r2,c2;

    for(int i=0;i<queries.size();i++)
    {
        sum=0;
        r1=queries[i][0];
        c1=queries[i][1];
        r2=queries[i][2];
        c2=queries[i][3];
        if(r1==0 && c1==0)
        sum=dp[r2][c2];
        else if(r1==0)
        {
            sum=dp[r2][c2]-dp[r2][c1-1];
        }
        else if(c1==0)
        {
            sum=dp[r2][c2]-dp[r1-1][c2];
        }
        else
        sum=dp[r2][c2]-dp[r2][c1-1]-dp[r1-1][c2]+dp[r1-1][c1-1];
        
        // cout<<sum<<" ";
        ans.push_back(sum);
    }
    

    return ans;
}
