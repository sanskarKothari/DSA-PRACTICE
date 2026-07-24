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
    TreeNode*prev=nullptr;
      TreeNode*f=nullptr;
        TreeNode*s=nullptr;

    void k(TreeNode*root){
        if(!root)return ;
        k(root->left);
        if(prev && prev->val>root->val){
            if(!f){
                f=prev;
            }
            s=root;
        }
        prev=root;
        k(root->right);
    }
public:
    void recoverTree(TreeNode* root) {
        if(!root)return ;
      k(root);
      if(s&&f) swap(f->val,s->val);
       
        
    }
};