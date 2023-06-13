class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        int count=0,size=1;
        int ans=1;
        
        int index=-1;
        
        for(int i=1;i<s.size();i++)
        {
            
            if(s[i]==s[i-1])
            {
                count++;
                if(count==2)
                {
                    size=i-index;
                    count=1;
                }
                index=i;
            }
            
            size++;
            
            ans=max(ans,size);
            
        }
        
        return ans;
    }
};
