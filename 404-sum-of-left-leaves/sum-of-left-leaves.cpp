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
    int sumOfNodes;
    void dfs(TreeNode* node){
        if(node -> left != nullptr){
            if(node -> left -> left == nullptr && node -> left -> right == nullptr){
                sumOfNodes += node -> left -> val;
            }
            dfs(node -> left);
        }
        if(node -> right != nullptr){
            dfs(node -> right);
        }
    }

    int sumOfLeftLeaves(TreeNode* root) {
        sumOfNodes = 0;
        dfs(root);
        return sumOfNodes;
    }
};