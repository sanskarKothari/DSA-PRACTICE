class Solution {
    bool iL(Node* root){
        return root && !root->left && !root->right;
    }

    void lb(Node* root, vector<int>& a){
        while(root && !iL(root)){
            a.push_back(root->data);

            if(root->left == nullptr)
                root = root->right;
            else
                root = root->left;
        }
    }

    void rb(Node* root, vector<int>& ans){
        vector<int> a;

        while(root && !iL(root)){
            a.push_back(root->data);

            if(root->right == nullptr)
                root = root->left;
            else
                root = root->right;
        }

        reverse(a.begin(), a.end());

        for(auto x : a)
            ans.push_back(x);
    }

    void lf(Node* root, vector<int>& a){
        if(!root) return;

        lf(root->left, a);
        lf(root->right, a);

        if(iL(root))
            a.push_back(root->data);
    }

public:
    vector<int> boundaryTraversal(Node *root) {

        vector<int> ans;

        if(!root) return ans;

        if(!iL(root))
            ans.push_back(root->data);

        lb(root->left, ans);
        lf(root, ans);
        rb(root->right, ans);

        return ans;
    }
};