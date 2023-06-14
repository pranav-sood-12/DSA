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

    void inorder(TreeNode* root,priority_queue<int, vector<int>, greater<int>> &pq)
    {
        if(root==NULL)
        return ;

        inorder(root->left,pq);
        pq.push(root->val);
        inorder(root->right,pq);
    }

    int getMinimumDifference(TreeNode* root) {
        priority_queue<int, vector<int>, greater<int>> pq;

        inorder(root,pq);
        int ans=INT_MAX;
        while(pq.size()>1)
        {
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            int temp=abs(x-y);
            cout<<temp<<endl;
            ans=min(ans,abs(x-y));
        }

        return ans;
    }
};
