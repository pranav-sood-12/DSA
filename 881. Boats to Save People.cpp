class Solution {
public:

//      int f(vector<int> people,int limit)
//    {
//         if(limit==0)
//         return 1;

//         if(limit>0)
//         {

//         }
//     }
    int numRescueBoats(vector<int>& people, int limit) {
        // f(people,limit);
        sort(people.begin(),people.end());
        int i=0,j=people.size()-1;
        int ans=0;
        while(i<=j)
        {
            if(people[i]+people[j]<=limit)
            {
                i++;j--;
            }
            else
            {
                j--;
            }
            ans++;
        }
        return ans;
    }
};
