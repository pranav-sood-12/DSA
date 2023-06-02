class Solution {
public:
    string removeTrailingZeros(string num) {
        int n=num.size();
        string ans="";
        bool temp=true;
        for(int i=n-1;i>=0;i--)
        {
            if(num[i]=='0' && temp==true)
                continue;
            else 
            {
                temp=false;
                ans+=num[i];
            }
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};
