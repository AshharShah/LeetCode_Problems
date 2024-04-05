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
    vector<int> rightSideView(TreeNode *root)
    {
        vector<int> results;

        if (root == NULL)
        {
            return results;
        }

        queue<TreeNode *> q;

        q.push(root);

        while (q.empty() == false)
        {
            int currNodes = q.size();
            for (int i = 0; i < currNodes; i++)
            {
                TreeNode *temp = q.front();
                // cout << temp->val << " ";
                q.pop();
                if (i == currNodes - 1)
                {
                    results.push_back(temp->val);
                }
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
            // cout << endl;
        }
        return results;
    }
};