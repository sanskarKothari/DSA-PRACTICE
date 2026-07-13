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
    int f(TreeNode* root){
        if(root==nullptr)return 0;
        int k1=f(root->left);
        int k2=f(root->right);
        if(k1==-1)return -1;
        if(k2==-1)return -1;
        if(abs(k1-k2)>1)return -1;
        return max(k1,k2)+1;

    }
public:
    bool isBalanced(TreeNode* root) {
      int h=  f(root);
      if(h!=-1)return 1;
      else{
        return 0;
      }
        
    }
};