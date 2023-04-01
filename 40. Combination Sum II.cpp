
class Solution {
public:

    void f(vector<int> candidates,vector<vector<int>> &ans,vector<int> temp,int target,int n)
    {
       
       

        if(target==0)
        {

            
            sort(temp.begin(),temp.end());
            bool isPresent = find(ans.begin(), ans.end(), temp) != ans.end();
            if(!isPresent){
                ans.push_back(temp);   
                // cout<<"hello";        
            }
            return ;
        }
         if(n==0)
        return ;
        
      
        

        if(candidates[n-1]<=target)
        {
            temp.push_back(candidates[n-1]);

            f(candidates,ans,temp,target-candidates[n-1],n-1);
            temp.pop_back();
           
            // f(candidates,ans,temp,target,n-1);
        }
        while(n>1 && candidates[n-1]==candidates[n-2])n=n-1;
        f(candidates,ans,temp,target,n-1);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n=candidates.size();
        sort(candidates.begin(),candidates.end());
        f(candidates,ans,temp,target,n);

        return ans;
    }
};
