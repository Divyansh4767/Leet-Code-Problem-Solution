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
    int dfs(TreeNode* root, int sumOfDigits){
        if(!root)   return 0;
        sumOfDigits = sumOfDigits*10 + root -> val;

        if(!root -> left && !root -> right) return sumOfDigits;
        return dfs(root -> left, sumOfDigits) + dfs(root -> right, sumOfDigits);
    }

    int sumNumbers(TreeNode* root) {
        return dfs(root, 0);
    }
};