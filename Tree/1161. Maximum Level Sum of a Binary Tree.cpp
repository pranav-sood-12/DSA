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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        int sum=0,ans=INT_MIN;
        int i=0,index=0;
        while(q.size()>1)
        {
            TreeNode* curr=q.front();
            q.pop();
            if(curr==NULL)
            {
                i++;
                if(ans<sum)
                {
                    ans=sum;
                    index=i;
                }
                sum=0;
                q.push(NULL);
                continue;
            }

            sum+=curr->val;

            if(curr->left!=NULL)
            q.push(curr->left);
            if(curr->right!=NULL)
            q.push(curr->right);
        }
        
        if(ans<sum)
        {
            ans=sum;
            i++;
            index=i;
        }

        return index;
    }
};
