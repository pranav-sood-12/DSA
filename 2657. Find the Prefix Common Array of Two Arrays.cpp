class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int> m1;
        unordered_map<int,int> m2;
        vector<int> ans;
        int count=0;
        for(int i=0;i<A.size();i++)
        {
            m1[A[i]]++;
            m2[B[i]]++;
            
            if(A[i]==B[i])
            {
                count++;
                ans.push_back(count);
            }
            else
            {
                if(m2[A[i]]>0)
                    count++;
                if(m1[B[i]]>0)
                    count++;
                
                ans.push_back(count);
            }
            
            
        }
        
        return ans;
    }
};

// 2     3

