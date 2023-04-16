/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    void parentNode(TreeNode* root,unordered_map<TreeNode*,TreeNode*> &parent_track)
    {
        
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            TreeNode* curr= q.front();
            q.pop();

            if(curr->left!=NULL)
            {
                parent_track[curr->left]=curr;
                q.push(curr->left);
            }
            if(curr->right!=NULL)
            {
                parent_track[curr->right]=curr;
                q.push(curr->right);
            }
        }
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*> parent_track;

        parentNode(root,parent_track);

        unordered_map<TreeNode*,bool> visited;
        int currLevel=0;
        queue<TreeNode*> q;
        q.push(target);
        visited[target]=true;
        while(!q.empty())
        {
            int size=q.size();
            if(currLevel++ == k)
            break;
            for(int i=0;i<size;i++)
            {
                TreeNode* curr=q.front();
                q.pop();

                if(curr->left!=NULL && visited[curr->left]==false)
                {
                    
                    q.push(curr->left);
                    visited[curr->left]=true;
                }
                if(curr->right!=NULL && visited[curr->right]==false)
                {
                    
                    q.push(curr->right);
                    visited[curr->right]=true;
                }
                if(parent_track[curr] && visited[parent_track[curr]]==false)
                {
                    
                    q.push(parent_track[curr]);
                    visited[parent_track[curr]]=true;
                }
            }
        }

        vector<int> result;

        while(!q.empty())
        {
            TreeNode* curr=q.front();
            q.pop();

            result.push_back(curr->val);
        }


        return result;

    }
};
