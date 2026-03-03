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
    bool isBalanced(TreeNode* root) 
    {
        if(!root)
        {
            return true;
        }
        isBalance = true;

        compareHeight(root);
        return isBalance;
    }

private:

    int compareHeight(TreeNode* root)
    {
        if(!root)
        {
            return 0;
        }
        
        int leftTree = compareHeight(root->left);
        int rightTree = compareHeight(root->right);

        if(abs(leftTree - rightTree) > 1)
        {
            isBalance = false;
        }

        return 1 + max(leftTree, rightTree);
    }

    bool isBalance;
};

// Time: O(n)
// Space: O(n)
