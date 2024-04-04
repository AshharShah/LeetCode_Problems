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
    // int maxInPath;
    int good;

    void getGoodNodes(TreeNode *root, int maxInPath)
    {
        if (root == NULL)
        {
            return;
        }
        if (root->val >= maxInPath)
        {
            maxInPath = root->val;
            good++;
        }
        getGoodNodes(root->left, maxInPath);
        getGoodNodes(root->right, maxInPath);
    }

    int goodNodes(TreeNode *root)
    {
        good = 0;
        int maxInPath = root->val;

        getGoodNodes(root, maxInPath);

        return good;
    }
};