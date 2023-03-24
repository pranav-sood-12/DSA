class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int count=0;
        int n=a.size();
        vector<int> nums;
        for(int i=0;i<a.size()-1;i++)
        {
            if(a[i]!=a[i+1])
            {
                count++;
                // cout<<a[i]<<" ";
                nums.push_back(a[i]);
            }
            
        }
        count++;
        // cout<<a[n-1]<<endl;
        nums.push_back(a[n-1]);
        
        for(int i=0;i<count;i++)
        {
            a[i]=nums[i];
        }
        return count;
    }
};
