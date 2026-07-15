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
    int s=INT_MIN;
    int f(TreeNode* root){
        if(!root)return 0;
        int l=max(0,f(root->left));
        int r=max(0,f(root->right));
      s = max(s, root->val + l + r);
        return max(l,r)+root->val;
    }
public:
    int maxPathSum(TreeNode* root) {
        f(root);
        return s;
        
    }
};