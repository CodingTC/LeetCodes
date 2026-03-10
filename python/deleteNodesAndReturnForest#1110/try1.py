# This is the optimal solution

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def delNodes(self, root: Optional[TreeNode], to_delete: List[int]) -> List[TreeNode]:
        deleteSet = set(to_delete)
        roots = []
        def dfs(node, isRoot, isDeleted):
            if not node:
                return

            if node.val in deleteSet:
                isDeleted = True
                isRoot = False

            if isRoot:
                roots.append(node)
            
            leftChild, rightChild = node.left, node.right
            if leftChild and leftChild.val in deleteSet:
                node.left = None
            if rightChild and rightChild.val in deleteSet:
                node.right = None
            
            if isDeleted:
                dfs(leftChild, True, False)
                dfs(rightChild, True, False)
                del node
            else:
                dfs(leftChild, False, False)
                dfs(rightChild, False, False)   

        dfs(root, True, False)

        return roots

# Time: O(N)
# Space: O(h) / O(N)
