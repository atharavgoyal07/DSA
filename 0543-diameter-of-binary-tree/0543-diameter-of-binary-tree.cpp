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
    int diameterOfBinaryTree(TreeNode* root) {
        
        int result=0;
        dfs(result, root);
        return result;
    }

    int dfs(int &result, TreeNode* root){
        if(root==NULL){
            return 0;
        }

        int l= dfs(result, root->left);
        int r= dfs(result, root->right);

        result= max(result, l+r);

        return max(l,r)+1;
    }
};