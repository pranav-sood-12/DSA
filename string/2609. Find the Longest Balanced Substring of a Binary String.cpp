class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int count0=0,count1=0;
        int i=0,j=0,ans=0;

        

        while(i<s.size())
        {
            while(i<s.size() && s[i]=='0')
            {
                count0++;
                i++;
            }

            while(i<s.size() && s[i]=='1')
            {
                count1++;
                i++;
            }

            ans=max(ans,min(count0,count1));
            count0=0;
            count1=0;
        }

        return 2*ans;
    }
};
