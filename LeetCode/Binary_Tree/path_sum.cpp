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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if( root == NULL )
        {
            if( targetSum == 0 )
                return true;
            return false;
        }
        
        // if sum exists
        if( targetSum - root->val == 0 && root->left == NULL && root->right == NULL )
            return true;
        
        bool ans = false;
        
        if( root->left != NULL )
            ans |= hasPathSum( root->left, targetSum - root->val );
        
        if( root->right != NULL )
            ans |= hasPathSum( root->right, targetSum - root->val );
        
        return ans;
    }
};
