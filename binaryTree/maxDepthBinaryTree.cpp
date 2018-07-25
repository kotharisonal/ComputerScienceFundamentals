/*
Given a binary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

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


private:
int findDepth(TreeNode * root, int depth)
{
    if (root == NULL)
        return depth;
    else {
        depth++;
        depth = max(findDepth(root->left, depth), findDepth(root->right, depth));
        return depth;
    }
}
    
public:
    int maxDepth(TreeNode* root) {
        int depth = 0;
        depth = findDepth(root, depth);
        return depth;
    }
}; 
