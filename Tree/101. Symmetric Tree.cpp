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

    // bool f(TreeNode* leftNode,TreeNode* rightNode)
    // {
    //     if(leftNode==NULL && rightNode==NULL)
    //     return true;

    //     if(leftNode==NULL || rightNode==NULL || leftNode->val!=rightNode->val)
    //     return false;

    //     return f(leftNode->left,rightNode->right) && f(leftNode->right,rightNode->left);
    // }

    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        return true;

        // return f(root->left,root->right);

        queue <TreeNode*> q;
        q.push(root->left);
        q.push(root->right);

        while(!q.empty())
        {
            TreeNode* leftNode=q.front();
            q.pop();
            TreeNode* rightNode=q.front();
            q.pop();

            if(leftNode==NULL && rightNode==NULL)
            continue;

            if(leftNode==NULL || rightNode==NULL || leftNode->val!=rightNode->val)
            return false;
            q.push(leftNode->left);
            q.push(rightNode->right);
            q.push(leftNode->right);
            q.push(rightNode->left);
        }

        return true;
    }
};
