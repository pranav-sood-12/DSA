class Solution {
public:

    long long f(vector<vector<int>>& questions,int i,int n)
    {
        if(i>=n)
        return 0;

        return max((questions[i][0]+f(questions,i+1+questions[i][1],n)),f(questions,i+1,n));
    }


    long long mostPoints(vector<vector<int>>& questions) {
        int n=questions.size();
        // its recursive code is more easier to under stand 
        // return f(questions,0,n);

        vector<long long> dp(n+1,0);
        

        for(int i=n-1;i>=0;i--)
        {
  
            int nextQuestion=min(n,i+1+questions[i][1]);
            dp[i]=max(questions[i][0]+dp[nextQuestion],dp[i+1]);
            // here we have to add min condition if the i+1+questions[i][1] becomes greater than n so in recursive code we return 0 if this happens then in this code we create min condition.
         
        }

        return dp[0];
    }
};
