class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        if(s.size()==1)
        return false;
        int open=0,close=0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                s1.push(s[i]);
                open++;
            }
            else
            {
                if(s1.size()==0)
                    return false;
                char temp = s1.top();
                
                if((s[i]==')' && temp=='(') || (s[i]==']' && temp=='[') || (s[i]=='}' && temp=='{'))
                s1.pop();

                close++;
            }
            
        }

        if(open==close && s1.size()==0)
        return true;

        return false;
    }
};
