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
    unordered_map<int,int> mp;
    int i = 0;

    TreeNode* solve(vector<int>& pre, int l, int r) {

        if(l > r) return NULL;

        TreeNode* root = new TreeNode(pre[i++]);

        int pos = mp[root->val];

        root->left = solve(pre, l, pos - 1);
        root->right = solve(pre, pos + 1, r);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        for(int j = 0; j < inorder.size(); j++)
            mp[inorder[j]] = j;

        return solve(preorder, 0, inorder.size() - 1);
    }
};