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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;

        queue<TreeNode *> q;
        q.push(root);
        int f = 1;
        while (!q.empty())
        {
            vector<int> temp;
            int h = q.size();
            while (h--)
            {
                TreeNode *t = q.front();
                temp.push_back(t->val);
                q.pop();

                if (t->left)
                    q.push(t->left);
                if (t->right)
                    q.push(t->right);
            }
            if (f % 2 == 0)
                reverse(temp.begin(), temp.end());
            ans.push_back(temp);
            f = !f;
        }
        return ans;
    }
};