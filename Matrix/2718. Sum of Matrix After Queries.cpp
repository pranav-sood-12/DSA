class Solution {
public:

    
    long long matrixSumQueries(int n, vector<vector<int>>& queries) {
        int r=0,c=0;
        unordered_map<int,int> rmap,cmap;
        int size=queries.size();
        int poss=n;
        long long ans=0;
        
        
        
        for(int i=size-1;i>=0;i--)
        {
            poss=n;
            int ty=queries[i][0];
            int index=queries[i][1];
            long long val=queries[i][2];
            
            if(ty==0 && rmap[index]==0)
            {
                poss=poss-c;
                r++;
                rmap[index]=1;
                ans+=poss*val;
            }
            else if(ty==1 && cmap[index]==0)
            {
                poss=poss-r;
                c++;
                cmap[index]=1;
                ans+=poss*val;
            }
        }
        
        return ans;
    }
};
