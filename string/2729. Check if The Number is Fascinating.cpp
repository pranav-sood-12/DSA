class Solution {
public:
    bool isFascinating(int n) {
        int a=2*n;
        int b=3*n;
        
        string one = to_string(n);
        string two = to_string(a);
        string three = to_string(b);
        
        string ans=one+two+three;
        
        if(ans.size()!=9)
            return false;
            
        sort(ans.begin(),ans.end());
        
        if(ans[0]=='0')
            return false;
        
        string temp="123456789";
        
        if(ans==temp)
            return true;
        else
            return false;
    }
};
