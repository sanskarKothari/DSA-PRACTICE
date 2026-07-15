class Solution {
public:

    bool m(TreeNode* root, long long l, long long u) {

        if(!root) return true;

        if(root->val <= l || root->val >= u)
            return false;

        return m(root->left, l, root->val) &&
               m(root->right, root->val, u);
    }

    bool isValidBST(TreeNode* root) {

        return m(root, LLONG_MIN, LLONG_MAX);
    }
};