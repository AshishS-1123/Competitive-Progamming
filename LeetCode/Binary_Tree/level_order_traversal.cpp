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
    vector<vector<int>> levelOrder(TreeNode* root) {
        // vector of vector to store the result
        vector<vector<int>> result;
        // temporary vector to store elemnts of current level
        vector<int>temp;
        
        // if there are no elements in tree
        if( root == NULL )
            return result;
        
        // create a queue to store elements to be procesed
        queue<TreeNode*> q;
        // node to store element being processed
        TreeNode* curr;
        
        // add the root to the queue
        q.push(root);
        // add null vlue to show end of level
        q.push(NULL);
        
        // repeat until all elements have been processed
        while( q.size() > 1 )
        {
            // get the next element to process
            curr = q.front();
            // remove that element from the queue
            q.pop();
            
            // if the current level has been completely processed
            if( curr == NULL )
            {
                q.push( NULL );
                
                // add all elements of current level to the result
                result.push_back( temp );
                // remove the elements of this level so we can process next level
                temp.clear();
            }
            // if we are still processing current level
            else
            {
                // if there are some elements in left sub tree
                if( curr->left != NULL )
                    // add that to the queue
                    q.push( curr->left );
                
                // if there are some elements in the right sub tree
                if( curr->right != NULL )
                    // add that to the queue
                    q.push( curr->right );
                
                // add curr->data to list
                temp.push_back( curr->val );
            }
        }
        
        result.push_back( temp );
        return result;
    }
};
