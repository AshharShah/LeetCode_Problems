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
    void getLeaves(TreeNode *root, vector<int> &leaves)
    {
        if (root == NULL)
        {
            return;
        }
        getLeaves(root->left, leaves);
        if (root->left == NULL && root->right == NULL)
        {
            leaves.push_back(root->val);
        }
        getLeaves(root->right, leaves);
    }

    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        vector<int> leaves1;
        vector<int> leaves2;

        getLeaves(root1, leaves1);
        getLeaves(root2, leaves2);

        int s1 = leaves1.size();
        int s2 = leaves2.size();

        if (s1 != s2)
        {
            return false;
        }

        for (int i = 0; i < s1; i++)
        {
            if (leaves1[i] != leaves2[i])
            {
                return false;
            }
        }

        return true;
    }
};