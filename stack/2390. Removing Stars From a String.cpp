class Solution {
public:
    string removeStars(string s) {
        // TWO POINTER BUT NOT SUCCESSFULL
        
        // string visited="";

        // int star=0,left=0;
        // int count=2;
        // for(int i=0;i<s.size();i++)
        // {
        //     if(i>0 && s[i-1]=='*' && s[i]=='*')
        //     {
        //         count++;
        //         visited.push_back('F');
        //         visited[i-count]='F';
        //     }

        //     else if(s[i]=='*')
        //     {
        //         visited.push_back('F');
        //         visited[i-1]='F';
        //         count=2;
        //     }
        //     else
        //     {
        //         visited.push_back('T');
        //     }
        // }

        string ans="";
        // for(int i=0;i<s.size();i++)
        // {
        //     cout<<visited[i]<<" ";
        //     if(visited[i]=='T')
        //     {
        //         ans.push_back(s[i]);
        //     }
        // }

        stack<char> s1;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='*')
            {
                s1.pop();
            }
            else
            s1.push(s[i]);
        }

        while(!s1.empty())
        {
            char temp =s1.top();
            s1.pop();

            ans.push_back(temp);
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};
