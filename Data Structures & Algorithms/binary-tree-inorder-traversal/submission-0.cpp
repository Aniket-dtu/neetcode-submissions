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
     void dp(TreeNode* node,vector<int>&temp){
        if(node==NULL){
            return;
        }
        
        dp(node->left,temp);
        temp.push_back(node->val);
        dp(node->right,temp);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>temp;
        dp(root,temp);
        return temp;
        
    }
};