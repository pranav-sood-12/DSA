class Solution {
public:

    // int f(int subs,int i,int n,int day,vector<int> days,vector<int> costs)
    // {
    //     // if(i>=n)
    //     // return 0;
        
    //     // if(days[i]-day<=subs)
    //     // {
    //     //     return (f(subs,i+1,n,days[i+1],days,costs));
    //     // }
    //     // else
    //     // return min( (costs[0]+f(1,i+1,n,days[i+1],days,costs)),
    //     //             min((costs[1]+f(7,i+1,n,days[i+1],days,costs)),
    //     //             (costs[2]+f(30,i+1,n,days[i+1],days,costs))) );


    // }

    int solve(vector<int>& days, vector<int>& costs,int n,int index)
    {
        if(index>=n)
        return 0;
        // int subs1=0,subs2=0,subs3=0;
        //day 1
        int subs1=costs[0]+solve(days,costs,n,index+1);

        //day 7
        int i;

        for(i=index;i<n && days[i]<days[index]+7;i++);

        int subs2=costs[1]+solve(days,costs,n,i);

        //days 30

        for(i=index;i<n && days[i]<days[index]+30;i++);

        int subs3=costs[2]+solve(days,costs,n,i);

        return min(subs1,min(subs2,subs3));
    }

    int solveMem(vector<int>& days, vector<int>& costs,int n,int index,vector<int> &dp)
    {
        if(index>=n)
        return 0;

        if(dp[index]!=-1)
        return dp[index];
     
        //day 1
        int subs1=costs[0]+solveMem(days,costs,n,index+1,dp);

        //day 7
        int i;

        for(i=index;i<n && days[i]<days[index]+7;i++);

        int subs2=costs[1]+solveMem(days,costs,n,i,dp);

        //days 30

        for(i=index;i<n && days[i]<days[index]+30;i++);

        int subs3=costs[2]+solveMem(days,costs,n,i,dp);

        return dp[index]=min(subs1,min(subs2,subs3));
    }

    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n=days.size();
        

        // return solve(days,costs,n,0);

        vector<int> dp(n+1,0);
        // return solveMem(days,costs,n,0,dp);

        for(int k=n-1;k>=0;k--)
        {
            int subs1=costs[0]+dp[k+1];

            //day 7
            int i;

            for(i=k;i<n && days[i]<days[k]+7;i++);

            int subs2=costs[1]+dp[i];

            //days 30

            for(i=k;i<n && days[i]<days[k]+30;i++);

            int subs3=costs[2]+dp[i];
            
            dp[k]=min(subs1,min(subs2,subs3));
        }

        return dp[0];



    }
};
