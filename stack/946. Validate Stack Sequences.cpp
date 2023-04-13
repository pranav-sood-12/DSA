class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n=pushed.size();
        int i=0;
        int m=popped.size();
        int j=0;
        stack<int> s;
        int temp;
 
        

        while(i<pushed.size())
        {
            
            s.push(pushed[i]);
            i++;

            temp=s.top();

            // if(temp!=popped[j])
            // {
            //     s.push(pushed[i]);
            // }

            while(!s.empty() && temp==popped[j])
            {
                s.pop();
                j++;
                if(!s.empty())
                temp=s.top();
            }

        }

        return s.empty();
    }
};
