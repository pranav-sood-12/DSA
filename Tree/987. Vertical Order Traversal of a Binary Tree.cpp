/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map <int,map<int,multiset<int>>> m;
        queue <pair<TreeNode*,pair<int,int>>> q;

        q.push({root,{0,0}});

        while(!q.empty())
        {
            auto curr=q.front();

            q.pop();
            TreeNode* node=curr.first;
            int x=curr.second.first,y=curr.second.second;

            m[x][y].insert(node->val);

            if(node->left!=NULL)
            {
                q.push({node->left,{x-1,y+1}});
            }

            if(node->right!=NULL)
            {
                q.push({node->right,{x+1,y+1}});
            }
        }

        vector<vector<int>> ans;

        for(auto p:m)
        {
            vector<int> col;
            // cout<<p.first;
            // cout<<p.second.first;
            for(auto q:p.second)
            {
                cout<<q.second.size()<<" ";
                col.insert(col.end(),q.second.begin(),q.second.end());
            }
            cout<<endl;
            ans.push_back(col);
        }

        return ans;
    }
};
