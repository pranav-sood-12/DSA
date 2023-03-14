class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        vector<int> a;
        a.push_back(0);
        int sum=0;

        
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            a.push_back(sum);
        }


        int k=0,ans=0;
        for(int i=2;i<arr.size();i++)
        {
            if(i%2!=0)
            continue;
            for(int j=i+1;j<a.size();j++)
            {
                ans+=a[j]-a[k];
                k++;
            }
            k=0;
        }

        ans+=a[arr.size()];
        return ans;
    }
};
