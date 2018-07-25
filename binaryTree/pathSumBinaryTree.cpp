/*
Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.

Note: A leaf is a node with no children.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root == NULL)
            return false;
        if((root->left == NULL ) && (root->right == NULL))
        {
            if (root->val == sum)
                return true;
        }
        return ((hasPathSum(root->left, sum-root->val)) || (hasPathSum(root->right, sum-root->val)));
        
    }
};
