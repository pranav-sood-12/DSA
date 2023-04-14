class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        long long n=matrix.size();
        long long m=matrix[0].size();
        vector<bool> row(n,false);
        vector<bool> col(m,false);

        
        for(long long i=0;i<n;i++)
        {
            for(long long j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    row[i]=true;
                    col[j]=true;
                }
            }
        }

        for(long long i=0;i<n;i++)
        {
            for(long long j=0;j<m;j++)
            {
                if(row[i]==true || col[j]==true)
                {
                    if(matrix[i][j]!=0)
                    matrix[i][j]=-1;
                }
            }
        }

        for(long long i=0;i<n;i++)
        {
            for(long long j=0;j<m;j++)
            {
                if(row[i]==true || col[j]==true)
                {
                    if(matrix[i][j]==-1)
                    matrix[i][j]=0;
                }
            }
        }

    }
};
