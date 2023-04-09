class Solution {
public:


    vector<int> findAnagrams(string s, string p) {
        int n=s.size();

        vector<int> ans;
     
        int k=p.size();

        if(n<k)
        return ans;

        vector<int> phash(26,0);
        vector<int> shash(26,0);

        for(int i=0;i<p.size();i++)
        {
            phash[p[i]-'a']+=1;
        }

        for(int i=0;i<k;i++)
        {
            shash[s[i]-'a']+=1;
        }
        // for(int i=0;i<26;i++)
        // {
        //     cout<<shash[i]<<" ";
        // }
        // cout<<endl;
        for(int i=k;i<s.size();i++)
        {
            if(phash==shash)
            ans.push_back(i-k);

            shash[s[i-k]-'a']-=1;
            shash[s[i]-'a']+=1;

            // for(int i=0;i<26;i++)
            // {
            //     cout<<shash[i]<<" ";
            // }
            // cout<<endl;

        }
        if(phash==shash)
            ans.push_back(s.size()-k);

        return ans;
    }
};
