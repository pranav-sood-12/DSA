class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        
        int mini=INT_MAX;
        int maxi=INT_MIN;

        for(int i=0;i<right.size();i++)
        {
            mini=min(mini,right[i]);
        }

        for(int i=0;i<left.size();i++)
        {
            maxi=max(maxi,left[i]);
        }
        cout<<maxi<<mini;

        return max(maxi,n-mini);
    }
};
