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
	vector<int> inorderTraversal(TreeNode* root) {        
    vector<int> final;
    vector<int> leftTree;
    vector<int> rightTree;
    
    if(root==NULL)
        return final;        
    
        leftTree = inorderTraversal(root->left);
        leftTree.push_back(root->val);
        rightTree = inorderTraversal(root->right);
    
    final.insert(final.end(),leftTree.begin(),leftTree.end());
    final.insert(final.end(),rightTree.begin(),rightTree.end());
    
    return final;               
}
};
