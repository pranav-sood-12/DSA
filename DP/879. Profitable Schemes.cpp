// class Solution {
// public:

//     int f(int n,int minProfit,vector<int> group,vector<int> profit,int profitSum,int i)
//     {
//         if(i==0){
//             // if(profit)
//             return 0;
//         }
//         if(n<=0)
//         return 0;

//         // if(profitSum<minProfit)
//         return 1+f(n-group[i-1],minProfit,group,profit,profitSum+profit[i-1],i-1) + f(n,minProfit,group,profit,profitSum,i-1);

//         // else
//         // return 1+f(n-group[i-1],minProfit,group,profit,profitSum+profit[i-1],i-1);
//     }

//     int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
//         int profitSum=0;
//         return f(n,minProfit,group,profit,profitSum,group.size());
//     }
// };

class Solution {
public:
   int dp[102][102][102];

    int mod=1e9+7;

    int solve(int k,int i, int j,int n, int minProfit, vector<int>& group, vector<int>& profit)
    {
        if(k==profit.size())
        {
            if(j>=minProfit and n>=i) return 1;
            return 0;
        }
        else if(n<i) return 0;
     
        if(dp[k][i][j]!=-1) return  dp[k][i][j];
        
        int include=0,notInclude=0;

        notInclude= solve(k+1,i,j,n,minProfit,group,profit);

        include=solve(k+1,i+group[k],min(j+profit[k],minProfit),n,minProfit,group,profit);

        return  dp[k][i][j] = (include  % mod + notInclude  % mod )%mod;
    }

    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        memset(dp,-1,sizeof(dp));
        return solve(0,0,0,n,minProfit,group,profit);
        
    }
};
