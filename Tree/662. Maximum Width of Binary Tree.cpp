/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     long long val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(long long x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(long long x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL)
        return 0;

        int ans=0;
        queue<pair<TreeNode*,long long>> q;
        q.push({root,0});

        while(!q.empty())
        {
            long long size=q.size();

            int first,last;
            long long mini=q.front().second;

            for(long long i=0;i<size;i++)
            {
                TreeNode* curr=q.front().first;
                long long curr_id=q.front().second-mini;
                q.pop();

                if(i==0)
                first=curr_id;

                if(i==size-1)
                last=curr_id;

                if(curr->left!=NULL)
                {
                    q.push({curr->left,(2*curr_id) +1});
                }

                if(curr->right!=NULL)
                {
                    q.push({curr->right,(2*curr_id) +2});
                }
            }

            ans=max(ans,last-first+1);
        }

        return ans;
    }
};
