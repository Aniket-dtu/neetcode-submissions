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
    void dp(TreeNode* node,stack<int>&temp){
        if(node==NULL){
            return;
        }
        temp.push(node->val);
        dp(node->right,temp);
        dp(node->left,temp);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        stack<int>ans;
        dp(root,ans);
        vector<int>temp;
        while(!ans.empty()){
            temp.push_back(ans.top());
            ans.pop();
        }

        return temp;
    }
};