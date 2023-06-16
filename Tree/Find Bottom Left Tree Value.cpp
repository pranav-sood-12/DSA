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

    int f(TreeNode* root)
    {
        if(root==NULL)
        return 0;

        queue<TreeNode*> q;
        q.push(root);
        int ans;
        while(q.empty()==false)
        {
            int count = q.size();
            vector<int> vec;

            for(int i=0;i<count;i++)
            {
                TreeNode* curr = q.front();
                q.pop();

                vec.push_back(curr->val);

                if(curr->left!=NULL)
                q.push(curr->left);
                if(curr->right!=NULL)
                q.push(curr->right);
            }
            if(q.size()==0)
            ans=vec[0];
            
        }

        return ans;
    }

    int findBottomLeftValue(TreeNode* root) {
        // return f(root);

        queue<TreeNode*> q;
        q.push(root);
        int ans;
        while(q.empty()==false)
        {
            int count = q.size();
            vector<int> vec;

            for(int i=0;i<count;i++)
            {
                TreeNode* curr = q.front();
                q.pop();

                vec.push_back(curr->val);

                if(curr->left!=NULL)
                q.push(curr->left);
                if(curr->right!=NULL)
                q.push(curr->right);
            }
            if(q.size()==0)
            ans=vec[0];
            
        }

        return ans;
    }
};
