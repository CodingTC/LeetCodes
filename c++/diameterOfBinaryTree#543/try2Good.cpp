// This is the optimal solution

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
        diameter = 0;
        longestPath(root);
        return diameter;
    }
    
private: 
    int diameter;

    int longestPath(TreeNode* root) 
    {
        if(!root)
        {
            return 0;
        }

        int leftPath = longestPath(root->left);
        int rightPath = longestPath(root->right);
        int maxPath = 1 + max(leftPath, rightPath);

        diameter = max(diameter, leftPath + rightPath);

        return maxPath;
    }
};

// Time: O(n)
// Space: O(n)
