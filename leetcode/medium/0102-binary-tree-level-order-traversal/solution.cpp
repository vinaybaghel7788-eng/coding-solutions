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
    int height(TreeNode *T)
    {
        if(T == NULL)
        {
            return 0;
        }

        if(T->left == NULL && T->right == NULL)
        {
            return 0;
        }

        return 1 + max(height(T->left), height(T->right));
    }

    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        int h = height(root);
        vector<vector<int>> table(h + 1);
        if(root == NULL)
        {
            return {};
        }
        queue<pair<TreeNode*,int>>q;
        q.push({root, 0});
        while(!q.empty())
        {
            TreeNode* T = q.front().first;
            int level = q.front().second;
            q.pop();
            table[level].push_back(T->val);
            if(T->left != NULL)
            {
                q.push({T->left,level+1});
            }
            if(T->right!=NULL)
            {
                q.push({T->right,level+1});
            }
        }

        return table;
    }
};