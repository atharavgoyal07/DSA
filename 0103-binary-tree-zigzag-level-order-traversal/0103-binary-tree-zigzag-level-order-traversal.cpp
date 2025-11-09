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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> answer;
        if(root==NULL){
            return answer;
        }
        queue<TreeNode*> q;
        int count=0;

        q.push(root);

        while(!q.empty()){
            vector<int> currlvl;
            int lvl= q.size();
            count++;
            
            for(int i=0; i<lvl; i++){
                TreeNode* node= q.front();
                q.pop();
                currlvl.push_back(node->val);

                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            if(count%2==0){
                reverse(currlvl.begin(), currlvl.end());
            }
            answer.push_back(currlvl);
        }
        return answer;

    }
};