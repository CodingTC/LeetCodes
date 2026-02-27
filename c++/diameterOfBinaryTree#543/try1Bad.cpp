// this is a bad solution

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
    int diameterOfBinaryTree(TreeNode* root) 
    {
        if(!root)
        {
            return 0;
        }
        
        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);
        int diameter = leftHeight + rightHeight; 

        return max
        (
        max(diameter, 
        diameterOfBinaryTree(root->left)),
        
        max(diameter, 
        diameterOfBinaryTree(root->right)));
    }
    
    int getHeight(TreeNode* root)
    {
        if(!root)
        {
            return 0;
        }

        return 1 + max(getHeight(root->left), getHeight(root->right));
    }
};

// Time: O(n^2)
// Space: O(n)
