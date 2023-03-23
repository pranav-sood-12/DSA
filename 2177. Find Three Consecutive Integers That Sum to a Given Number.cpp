class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> ans;
        if(num%3!=0)
        return {};
        long long second = num/3;
        long long first = second-1;
        long long third =  second+1;

        ans.push_back(first);
        ans.push_back(second);

        ans.push_back(third);

        return ans;
    }
};
