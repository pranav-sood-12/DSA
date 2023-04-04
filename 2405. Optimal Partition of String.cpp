class Solution {
public:
    int partitionString(string s) {
        int count=0;
        unordered_map<int,int> m;
        for(int i=0 ; i<s.length() ; i++){
            if(m.find(s[i]) != m.end()){
                count++;
                m.clear();
            }
            m[s[i]] = 1;
        }
        return count + 1;

        
    }
};

// 7 - 1
// 5 - 2
