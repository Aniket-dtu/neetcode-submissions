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
    int tempcount=0;
    int count=0;
    void dp(TreeNode *node){
        if(node==NULL){
            return;
        }
        tempcount++;
        count=max(count,tempcount);

        dp(node->left);
        dp(node->right);
        tempcount--;

    }
    int maxDepth(TreeNode* root) {
        dp(root);
        return count;
    }
};
