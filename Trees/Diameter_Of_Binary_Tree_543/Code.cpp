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
    int diametre; 

    int FindDiametre(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int lh = FindDiametre(root->left);
        int rh = FindDiametre(root->right);

        this->diametre = max(this->diametre, lh + rh);

        return 1 + max(lh, rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        FindDiametre(root);
        return this->diametre;
    }
};
