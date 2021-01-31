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
    bool checkMirror( TreeNode* node1, TreeNode* node2 )
    {
        // check if they are null nodes
        if( node1 == NULL && node2 == NULL )
            return true;
        // check if both are not null
        if( node1 != NULL && node2 != NULL )
        {
            // check for same values
            if( node1->val == node2->val )
            {
                // check right and left subtree symettric
                // for left and rght and subtree to be symmetric,
                if( checkMirror( node1->left, node2->right) && checkMirror( node1->right, node2->left) )
                    return true;
            }
        }
        
        return false;
        
    }
    bool isSymmetric(TreeNode* root) {
        if( root == NULL )
            return true;
        return checkMirror( root->left, root->right );
    }
};
