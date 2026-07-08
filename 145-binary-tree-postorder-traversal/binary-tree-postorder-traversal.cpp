class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {

        vector<int> ans;

        if(!root) return ans;

        stack<TreeNode*> st1;
        stack<int> st2;

        st1.push(root);

        while(!st1.empty()) {

            TreeNode* tp = st1.top();
            st1.pop();

            st2.push(tp->val);

            if(tp->left)
                st1.push(tp->left);

            if(tp->right)
                st1.push(tp->right);
        }

        while(!st2.empty()) {
            ans.push_back(st2.top());
            st2.pop();
        }

        return ans;
    }
};