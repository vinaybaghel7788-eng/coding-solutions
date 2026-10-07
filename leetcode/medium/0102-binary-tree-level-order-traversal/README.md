# Binary Tree Level Order Traversal

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given the `root` of a binary tree, return  *the level order traversal of its nodes' values*. (i.e., from left to right, level by level).

 

 **Example 1:** 

```
Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]

```

 **Example 2:** 

```
Input: root = [1]
Output: [[1]]

```

 **Example 3:** 

```
Input: root = []
Output: []

```

 

 **Constraints:** 

- The number of nodes in the tree is in the range [0, 2000].
- -1000 <= Node.val <= 1000

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 16.5 MB (beats 99.00%)  
**Submitted:** 2026-10-07T09:07:40.368Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/binary-tree-level-order-traversal/)