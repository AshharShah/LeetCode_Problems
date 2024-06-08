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
    int pathSum = 0;
    bool hasPathSum(TreeNode *root, int targetSum)
    {

        if (root == NULL)
        {
            return false;
        }

        pathSum += root->val;

        if (root->left == NULL && root->right == NULL)
        {
            if (pathSum == targetSum)
            {
                return true;
            }
            pathSum -= root->val;
            return false;
        }

        bool l = hasPathSum(root->left, targetSum);
        bool r = hasPathSum(root->right, targetSum);
        pathSum -= root->val;

        if (l == true)
        {
            return l;
        }
        else if (r == true)
        {
            return r;
        }

        return false;
    }
};