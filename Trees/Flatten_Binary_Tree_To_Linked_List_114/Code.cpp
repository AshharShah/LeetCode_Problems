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
    vector<TreeNode *> Nodes;
    TreeNode *getNodes(TreeNode *root)
    {
        if (root == NULL)
        {
            return root;
        }
        this->Nodes.push_back(root);
        getNodes(root->left);
        getNodes(root->right);
        return root;
    }
    void flatten(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }

        getNodes(root);

        for (int i = 0; i < this->Nodes.size() - 1; i++)
        {
            root->right = this->Nodes[i + 1];
            root->left = NULL;
            root = root->right;
        }
    }
};