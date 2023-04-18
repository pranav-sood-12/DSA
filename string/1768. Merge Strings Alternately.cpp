class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        string ans="";
        int x=word1.size();
        int y=word2.size();
        int n=min(x,y);
        int i=0;

        while(i<n)
        {
            ans+=word1[i];
            ans+=word2[i];
            i++;
            x--;
            y--;
        }
        int j=0;
        while(x>0 && j<x)
        {
            ans+=word1[i+j];
            j++;
        }

        while(y>0 && j<y)
        {
            ans+=word2[i+j];
            j++;
        }

        return ans;
    }
};
