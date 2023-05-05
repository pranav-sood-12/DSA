class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_map<char,int> m;

        m['a']=1; 
        m['e']=1;
        m['i']=1;
        m['o']=1;
        m['u']=1;

        int ans=0;
        int count=0;

    

        for(int i=0;i<k;i++)
        {
  
            if(m.find(s[i])!=m.end())
            count++;
        }

        ans=max(ans,count);

        for(int i=k;i<s.size();i++)
        {
            if(m.find(s[i-k])!=m.end())
            count--;
    

            if(m.find(s[i])!=m.end())
            count++;


            ans=max(ans,count);
        }

        return ans;
    }
};
