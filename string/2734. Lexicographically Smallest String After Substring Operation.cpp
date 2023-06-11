class Solution {
public:
    string smallestString(string s) {
        string ans="";

        bool x = true,p=true;
        
        for(int i=0;i<s.size();i++)
        {
            if(p==true && s[i]=='a')
            {
                if(s[i]=='a')
                    ans+=s[i];
            }
            
            else if(s[i]!='a' && x==true){
                ans+=(s[i]-1);
                p=false;
            }
            else 
            {
                x=false;
                ans+=s[i];
            }
            
        }
        
        if(p==true)
            ans[ans.size()-1]='z';
        
        return ans;
    }
};
