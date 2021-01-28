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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        
        if( root == NULL )
            return result;
        
        //result.push_back( root->val );
        
        vector<int> left_tree, right_tree;
        
        if( root->left != NULL )
            left_tree = inorderTraversal(root->left);
        if( root->right != NULL )
            right_tree = inorderTraversal(root->right);
        
        result.insert( result.end(), left_tree.begin(), left_tree.end() );
        result.push_back( root->val );
        result.insert( result.end(), right_tree.begin(), right_tree.end() );
        
        return result;
    }
};
