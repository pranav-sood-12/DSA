class Solution {
public:
    
//     int count(vector<int> nums,int n,int index,int color)
//     {
//         int temp1=0;
//         for(int i=0;i<n-1;i++)
//         {
//             if(nums[i]==nums[i+1] && nums[i]!=0)
//                 c++;
            
//         }
        
//         return c;
//     }
    
    vector<int> colorTheArray(int n, vector<vector<int>>& q) {
//         vector<int> nums(n);
//         vector<int> ans;
//         int temp1=0;
//         for(int i=0;i<queries.size();i++)
//         {
//             nums[queries[i][0]]=queries[i][1];
            
//             int temp=count(nums,n,queries[i][0],queries[i][1]);
//             // temp1=max(temp1,temp);
//             ans.push_back(temp);
//         }
//         for(int i=0;i<nums.size();i++)
//         {
//             cout<<nums[i]<<" ";
//         }
//         cout<<endl;
//         return ans;
        
        int nq=q.size();
        vector<int> ans(nq,0);
        if(n==1)
            return ans;
        
        vector<int> arr(n,0);

        
        int tcol=0;
        
        for(int i=0;i<nq;i++)
        {
            int id=q[i][0];
            int col=q[i][1];
            
            if(id==0)
            {
                int pval=(arr[id]==arr[id+1]);
                if(arr[id]!=0)
                    tcol-=pval;
                
                arr[id]=col;
                int nval=(arr[id]==arr[id+1]);
                tcol+=nval;
                ans[i]=tcol;
            }
            else if(id==n-1)
            {
                int pval=(arr[id]==arr[id-1]);
                if(arr[id]!=0)
                    tcol-=pval;
                
                arr[id]=col;
                int nval=(arr[id]==arr[id-1]);
                tcol+=nval;
                ans[i]=tcol;
            }
            else
            {
                int pval=(arr[id]==arr[id-1])+(arr[id]==arr[id+1]);
                if(arr[id]!=0)
                    tcol-=pval;
                
                arr[id]=col;
                int nval=(arr[id]==arr[id-1])+(arr[id]==arr[id+1]);
                
                tcol+=nval;
                ans[i]=tcol;
                
            }
        }
        
        return ans;
    }
};
