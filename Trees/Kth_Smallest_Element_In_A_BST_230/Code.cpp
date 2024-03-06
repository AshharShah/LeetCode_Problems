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
class Solution
{
public:
    vector<int> Nodes;

    TreeNode *kthSmall(TreeNode *root)
    {
        if (root == NULL)
        {
            return NULL;
        }
        kthSmall(root->left);
        this->Nodes.push_back(root->val);
        kthSmall(root->right);
        return root;
    }
    int kthSmallest(TreeNode *root, int k)
    {
        kthSmall(root);
        return Nodes[k - 1];
    }
};