class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int n=answers.size();
        unordered_map<int,int> m;
        // sort(answers.begin(),answers.end());
        int ans=0;
        
        for(int i=0;i<answers.size();i++)
        {
            // if(answers[i]==0)
            // ans++;
            // else if(answers[i]!=answers[i+1])
            // {
            //     ans+=answers[i]+1;
            // }
            m[answers[i]]++;
        }
        // if(answers[n-2]==answers[n-1])
        // {
            // ans+=answers[n-1]+1;
        // }

        for(auto u : m)
        {
            cout<<u.first<<"-->"<<u.second<<endl;
            if(u.second<u.first+1)
            {
                ans+=u.first+1;
            }
            else if(u.second%(u.first+1)==0)
            {
                int a = u.second/(u.first+1);
                ans+=(u.first+1)*a;
            }
            else
            {
                int a = u.second/(u.first+1);
                ans+=(u.first+1)*a;
                int b = u.second%(u.first+1);
                // ans+=(u.first+1)*b;
                ans+=u.first+1;

            }
        }
        
// 2 (5+5) 3 (4+12) 3
        return ans;
    }
};
