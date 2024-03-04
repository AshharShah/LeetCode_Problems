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
    int totalNodes = 0;
    pair<int,int> findNodes(TreeNode* root){
        if(root == NULL){
            return {0,0};
        }
        pair<int, int> lh = findNodes(root->left);
        pair<int, int> rh = findNodes(root->right);

        int sum = root->val + lh.first + rh.first;
        int count = 1 + lh.second + rh.second;

        if(sum/count == root->val){
            totalNodes++;
        }
        return {sum, count};
    }
    int averageOfSubtree(TreeNode* root) {
        findNodes(root);
        return totalNodes;
    }
};
