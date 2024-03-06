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

        vector<vector<int>> levels;

        if(root == NULL){
            return levels;
        }

        TreeNode* temp;

        queue<TreeNode*> q;
        q.push(root);

        int q_size;

        while(q.empty() == false){
            q_size = q.size();
            vector<int> v;
            for(int i = 0; i < q_size; i++){
                temp = q.front();
                q.pop();
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
                v.push_back(temp->val);
            }
            levels.push_back(v);
        }
        return levels;
    }
};
