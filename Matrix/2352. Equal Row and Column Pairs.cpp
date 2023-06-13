class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<string,int> row;
        unordered_map<string,int> col;

        for(int i=0;i<grid.size();i++)
        {
            string temp="";

            for(int j=0;j<grid[0].size();j++)
            {    
                string t =(to_string)((int)grid[i][j]);
                temp += t;
                temp += "_";
            }
            row[temp]++;
            cout<<temp;
            cout<<endl;

        }

        for(int i=0;i<grid.size();i++)
        {
            string temp="";
            for(int j=0;j<grid[0].size();j++)
            {    
                string t =(to_string)((int)grid[j][i]);
                temp += t;
                temp += "_";
            }
            col[temp]++;
            cout<<temp;
            cout<<endl;
        }
        
        int ans=0;


        for(auto u : row)
        {
            cout<<u.first<< " "<<u.second<<endl;
            if(col[u.first]>0)
            {
                ans+=(u.second*col[u.first]);
            }
        }

        return ans;
    }
};
