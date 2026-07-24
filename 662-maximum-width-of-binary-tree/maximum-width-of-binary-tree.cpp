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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        long long ans=0;
        while(!q.empty()){
            long long l,f;
            long long m=q.front().second;
            int sz=q.size();
     
            for(int i=0;i<sz;i++){
                TreeNode*p=q.front().first;
                long long curr=q.front().second-m;
                       q.pop();
                if(i==0)f=curr;
                if(i==sz-1)l=curr;
                if(p->left){
                    q.push({p->left,2*curr+1});
                }
                if(p->right){
                    q.push({p->right,2*curr+2});
                }
            }
            ans=max(ans,l-f+1);
        }
        return ans;
    }
};