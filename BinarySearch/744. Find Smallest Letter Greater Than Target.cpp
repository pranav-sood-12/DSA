class Solution {
public:

    char f(vector<char>& letters, char target,int x)
    {
        int start=0;
        int end=letters.size()-1;
        char res=letters[0];
        while(start<=end)
        {
            int mid=start + (end-start)/2;

            if(letters[mid]<=x)
            {
                start=mid+1;
            }
            else 
            {
                res=letters[mid];
                end=mid-1;
            }
        }

        return res;
    }

    char nextGreatestLetter(vector<char>& letters, char target) {
        int x=target;
        return f(letters,target,x);
        
    }
};
