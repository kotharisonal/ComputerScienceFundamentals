/*
Given a binary tree, return all root-to-leaf paths.

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
    
    void binaryTreePathUtil(TreeNode* root, string retString, vector<string>& retPath )
    {
        if ((!root->left) && (!root->right))
        {
            retPath.push_back(retString);
        }
        
        if(root->left)
        {
            binaryTreePathUtil(root->left, retString+"->"+ to_string(root->left->val), retPath );

        }
        
                
        if(root->right)
        {
            binaryTreePathUtil(root->right, retString+"->"+ to_string(root->right->val), retPath );

        }
    }

    
    vector<string> binaryTreePaths(TreeNode* root) {

        vector<string> retPath;
        string retString;
        if (root == NULL)
            return retPath;
        
        binaryTreePathUtil(root, to_string(root->val), retPath );
        return retPath;
    }
};
