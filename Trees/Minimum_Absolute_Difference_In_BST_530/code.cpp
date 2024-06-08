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
#include <climits>

class Solution
{
public:
    int minDiff = INT_MAX;

    void checkDiff(TreeNode *root, int val)
    {
        if (root == NULL)
        {
            return;
        }
        int x = abs(root->val - val);
        if (x < minDiff)
        {
            minDiff = x;
        }
        checkDiff(root->left, val);
        checkDiff(root->right, val);
    }

    void iterateTree(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }

        checkDiff(root->left, root->val);
        checkDiff(root->right, root->val);

        iterateTree(root->left);
        iterateTree(root->right);
    }

    int getMinimumDifference(TreeNode *root)
    {
        iterateTree(root);
        return minDiff;
    }
};