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

    int height(TreeNode* root) {
        if (root == NULL)
            return -1;

        return 1 + max(height(root->left), height(root->right));
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        if (root == NULL)
            return {};

        int h = height(root);

        queue<pair<TreeNode*, int>> q;

        vector<vector<int>> table(h + 1);

        q.push({root, 0});

        while (!q.empty()) {

            TreeNode* x = q.front().first;
            int level = q.front().second;
            q.pop();

            table[level].push_back(x->val);

            if (x->left != NULL)
                q.push({x->left, level + 1});

            if (x->right != NULL)
                q.push({x->right, level + 1});
        }

        for (int i = 1; i <= h; i += 2) {
            reverse(table[i].begin(), table[i].end());
        }

        return table;
    }
};