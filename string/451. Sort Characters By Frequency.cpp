class Solution {
public:

    static bool cmp(pair<char, int>& a,pair<char, int>& b)
    {
        return a.second > b.second;
    }
    string sorti(unordered_map<char, int>& M)
    {
    
        
        vector<pair<char, int> > A;
    
        
        for (auto& it : M) {
            A.push_back(it);
        }
    
        
        sort(A.begin(), A.end(), cmp);
    
        
        string ans="";

        for(auto u:A)
        {
            int temp=u.second;
            while(temp--)
            {
                ans.push_back(u.first);
            }
        }
        return ans;
    }
    string frequencySort(string s) {
        unordered_map<char,int> m;

        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }

        return sorti(m);
        // string ans="";

        // for(auto u:m)
        // {
        //     int temp=u.second;
        //     while(temp--)
        //     {
        //         ans.push_back(u.first);
        //     }
        // }

        // return ans;
    }
};
