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
    
    TreeNode* helper(vector<int>& inorder, vector<int>& postorder,unordered_map<int,int> ump,int &rootIdx,int left,int right)
    {
        if(left>right)
        return NULL;

        int pivot = ump[postorder[rootIdx]];
        TreeNode* node =  new TreeNode(postorder[rootIdx]);
        rootIdx--;

        node->right = helper(inorder,postorder,ump,rootIdx,pivot+1,right);
        node->left = helper(inorder,postorder,ump,rootIdx,left,pivot-1);

        return node;
    }


    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int rootIdx = postorder.size()-1;

        unordered_map<int,int> ump;
        for(int i=0;i<inorder.size();i++)
        ump[inorder[i]]=i;

        return helper(inorder,postorder,ump,rootIdx,0,inorder.size()-1);
    }
};

// class Solution {
// public:
//     unordered_map<int,int> idx;
//     TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
//          int start=0; 
//         int end=inorder.size()-1;
//         int postidx=end;
//         for(int i=0;i<inorder.size();i++) idx[inorder[i]]=i;
//         return maketree(postorder,inorder,postidx,start,end);
//     }
    
//      TreeNode* maketree(vector<int>& postorder, vector<int>& inorder,int &postidx,int start,int end){
//         if(start>end) return NULL;
//         //code-> int pivot = start;  // find the root from inorder
//         //code-> while(inorder[pivot] != preorder[preidx]) pivot++;
//         int pivot=idx[postorder[postidx]];
//         TreeNode *root=new TreeNode(postorder[postidx--]);
//         //make left subtree of current root recursively,similarly right 
//          root->right=maketree(postorder,inorder,postidx,pivot+1,end);
//         root->left=maketree(postorder,inorder,postidx,start,pivot-1);
//         //all elements to the left of current root will make its left ST 
        
        
//         return root; //build subtrees recursively 
//     }
// };
