class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        int count=0;
     
        if(c.size()==2)
        return true;

        for(int i=1;i<c.size()-1;i++)
        {
            float y1x2=(c[0][1]-c[1][1])*(c[i][0]-c[i+1][0]);
            float y2x1=(c[0][0]-c[1][0])*(c[i][1]-c[i+1][1]);

            if(y1x2!=y2x1)
            return false;
        }
     
        return true;
        
    }
};
