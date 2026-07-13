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
int d=0;
int f(TreeNode* root){
    if(root==nullptr)return 0;
    int r=f(root->right);
    int l=f(root->left);
    d=max(d,l+r);
    return 1+max(r,l);

}

    int diameterOfBinaryTree(TreeNode* root) {
        f(root);
        return d;
    }
};