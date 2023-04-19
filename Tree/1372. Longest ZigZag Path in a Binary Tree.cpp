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
    int maxLength=0;

    void solve(TreeNode* curr,int dir,int currLength)
    {
        if(curr==NULL)
        return ;
        maxLength=max(maxLength,currLength);
        solve(curr->left,0,dir?currLength+1:1);
        solve(curr->right,1,dir?1:currLength+1);

    }

    int longestZigZag(TreeNode* root) {
        solve(root,0,0);
        solve(root,1,0);
        return maxLength;
    }
};
