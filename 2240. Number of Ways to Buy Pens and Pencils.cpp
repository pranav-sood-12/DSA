class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        int index=max(cost1,cost2);

        int val=min(cost1,cost2);

        if((index>total && val>total))
        return 1;
        if((index>total && val<total))
        return total/val +1;

        int size=total/index;

        vector<int> temp(size+1);

        for(int i=0;i<size+1;i++)
        {
            temp[i]=(total-index*i)/val +1;
        }
        long long ans=0;
        for(int i=0;i<size+1;i++)
        {
            ans+=temp[i];
        }

        return ans;
    }
};
