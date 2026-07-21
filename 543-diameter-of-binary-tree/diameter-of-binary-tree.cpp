
class Solution {
    int d=0;
    int f(TreeNode* root){
        if(!root)return 0;
        int l=f(root->left);
        int r=f(root->right);
        d =max(d,l+r);
        return 1+max(l,r);

    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        f(root);
        return d;

        
    }
};