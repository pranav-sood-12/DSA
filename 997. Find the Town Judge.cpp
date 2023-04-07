#include<bits/stdc++.h>
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        // set<int> temp;
        // vector<int> s;
        // for(int i=0;i<trust.size();i++)
        // {
        //     temp.insert(trust[i][0]);
        // }

        // for(int i=1;i<=n;i++)
        // {
        //     auto pos = temp.find(i);
        //     if(pos == temp.end())
        //     {
        //         s.push_back(i);
        //     }

        // }


        // return -1;
        if(n==1)
        return 1;

        vector<int> ind(n+1,0);
        vector<int> out(n+1,0);
        for(int i=0;i<trust.size();i++)
        {
            out[trust[i][0]]++;
            ind[trust[i][1]]++;
        }

        for(int i=0;i<=n;i++)
        {
            
            if(out[i]==0 && ind[i]==n-1)
            {
                return i;
            }
        }

        return -1;

    }
};
