class Solution {
public:

    void f(int left,int right,string s,vector<string> &ans)
    {
        if(left==0 && right==0)
        {
            ans.push_back(s);
            return ;
        }

        if(left>0)
        f(left-1,right,s+'(',ans);
        // s.push_back('(');
        // cout<<s;
        if(left<right)
        f(left,right-1,s+')',ans);
        // s.push_back(')');
        // cout<<s<<endl;

    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s="";

        f(n,n,s,ans);

        return ans;
    }
};
