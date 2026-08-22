class Solution {
    map<int, int> mp;

    TreeNode* b(vector<int>& preorder, vector<int>& in,
               int preStart, int preEnd,
               int inStart, int inEnd) {

        if (preStart > preEnd || inStart > inEnd)
            return nullptr;

        int rootVal = preorder[preStart];

        TreeNode* root = new TreeNode(rootVal);

        int rootIndex = mp[rootVal];

        
        int leftSize = rootIndex - inStart;

      
        root->left = b(preorder, in,
                       preStart + 1,
                       preStart + leftSize,
                       inStart,
                       rootIndex - 1);

      
        root->right = b(preorder, in,
                        preStart + leftSize + 1,
                        preEnd,
                        rootIndex + 1,
                        inEnd);

        return root;
    }

public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {

        vector<int> in = preorder;

      
        sort(in.begin(), in.end());

  
        for (int i = 0; i < in.size(); i++) {
            mp[in[i]] = i;
        }

        return b(preorder, in,
                 0, preorder.size() - 1,
                 0, in.size() - 1);
    }
};